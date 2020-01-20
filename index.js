const fs = require('fs')
const {
  ipcRenderer
} = require('electron')
const conturi = require('./conturi.js')
let progress = document.getElementById('progress')
let control = document.getElementById('control')
let problema = document.getElementById('problema')
let nrs = fs.readdirSync('./rez')
let finalNrs = {}
let finalConts = {}
let nrKeys = []
let contKeys = []

new Vue({ // eslint-disable-line
  el: '#app',
  data: {
    probleme: [],
    conturi: []
  },
  methods: {
    addOrRemove (nr, _nrOrCont) {
      let _input =
        document.getElementById(`input-${_nrOrCont ? 'nr' : 'cont'}-${nr}`)
      let val = _input.checked
      let nrOrCont = _nrOrCont ? finalNrs : finalConts
      if (val) {
        nrOrCont[nr] = ''
      } else {
        delete nrOrCont[nr]
      }
      console.log(nrOrCont)
    }
  },
  created () {
    let row = []
    for (let i = 0, len = nrs.length; i < len; i++) {
      const nr = nrs[i].split('.')[0]
      if (row.length === 5) {
        this.probleme.push(row)
        row = []
        row.push(nr)
      } else {
        row.push(nr)
      }
    }
    this.probleme.push(row)

    row = []

    for (let i = 0, len = conturi.length; i < len; i++) {
      const cont = conturi[i]
      const tmp = cont.split('::')
      const email = tmp[0]
      if (row.length === 3) {
        this.conturi.push(row)
        row = []
        row.push({
          cont,
          email
        })
      } else {
        row.push({
          cont,
          email
        })
      }
    }

    this.conturi.push(row)
  }

})

console.log(nrs.length)

function contSiProblema (cb) {
  if (nrKeys.length && contKeys.length) {
    cb()
  } else {
    window.alert('trebuie macar un cont si o problema selectata')
  }
}

function start () { // eslint-disable-line
  nrKeys = Object.keys(finalNrs)
  contKeys = Object.keys(finalConts)
  contSiProblema(() => {
    nrKeys.forEach(key => {
      let content = fs.readFileSync('./rez/' + key + '.cpp', 'UTF-8')
      finalNrs[key] = content
    })
    problema.style.display = 'block'
    control.style.display = 'none'
    progress.innerText = 'am inceput...'
    send()
  })
}

function send () {
  contSiProblema(() => {
    let nr = nrKeys.shift()
    let rez = finalNrs[nr]
    ipcRenderer.send('start', nr, rez, contKeys)
    problema.innerText = 'problema: ' + nr
  })
}

ipcRenderer.on('gata', () => {
  if (nrKeys.length) {
    send()
  } else {
    progress.innerText = 'gata'
    control.style.display = 'block'
    problema.style.display = 'none'
  }
})
ipcRenderer.on('progress', (e, cont) => {
  progress.innerText = 'contul: ' + cont.split('::')[0]
})
