(() => {
  const {
    ipcRenderer
  } = require('electron')
  let mail
  let pass

  function main (i) {
    let btn =
      document.querySelectorAll('[type="submit"][class="btn btn-primary"]')
    if (btn[1] && btn[1].innerText === 'Autentificare') {
      btn = btn[1]
      let Mail = document.getElementById('user')
      let Pass = document.getElementById('parola')
      Mail.value = mail
      Pass.value = pass
      btn.click()
    } else {
      ipcRenderer.send('logat', i)
    }
  }
  ipcRenderer.on('cont', (e, i, cont) => {
    let tmp = cont.split('::')
    mail = tmp[0]
    pass = tmp[1]
    main(i)
  })
  ipcRenderer.on('loaded', (e, i) => main(i))
  ipcRenderer.on('problema', (e, i, problema) => {
    try {
      document.getElementById('limbaj_de_programare').value = 'cpp'
      window.onLimbajProgramareChange('cpp')
    } catch (e) {}
    window.Editor.setValue(problema)
    document.getElementById('btn-submit').click()

    function loop () {
      if (document.getElementById('detalii-evaluare') &&
        document.getElementById('detalii-evaluare').children &&
        document.getElementById('detalii-evaluare').children[0] &&
        document.getElementById('detalii-evaluare').children[0].innerText ===
        'Evaluare finalizată') {
        ipcRenderer.send('gata')
      } else {
        setTimeout(loop, 1000)
      }
    }
    loop()
  })
})()
