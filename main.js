const {
  app,
  BrowserWindow,
  ipcMain,
  session
} = require('electron')
const {
  join
} = require('path')
let mainWindow
let window = {
  status: 'closed'
}
let i = -1
let nr
let problema
let conturi = []

function returnWin (i, cont) {
  let win = new BrowserWindow({
    width: 800,
    height: 600,
    show: false,
    webPreferences: {
      preload: join(__dirname, 'preload.js'),
      nodeIntegration: false,
      session: session.fromPartition('persist:' + cont)
    }
  })

  win.loadURL('https://pbinfo.ro')

  // win.webContents.openDevTools()

  win.webContents.on('did-finish-load', () => {
    if (window.status === 'started') {
      window.status = 'loaded'
      win.webContents.send('cont', i, cont)
      mainWindow.send('progress', cont)
    } else if (window.status === 'loaded') {
      win.webContents.send('loaded', i)
    } else if (window.status === 'logat') {
      win.webContents.send('problema', i, problema)
    }
  })

  win.on('closed', () => {
    win = null
  })

  return win
}

function createWindow () {
  mainWindow = new BrowserWindow({
    width: 1000,
    height: 600,
    show: false,
    backgroundColor: '#2F3136'
  })
  mainWindow.loadFile('index.html')
  mainWindow.webContents.on('did-finish-load', () => {
    mainWindow.show()
  })
  mainWindow.on('closed', () => {
    mainWindow = null
  })
}

function main () {
  const cont = conturi.shift()
  if (cont) {
    window.status = 'started'
    i += 1
    returnWin(i, cont)
  } else {
    i = -1
    window.status = 'closed'
    mainWindow.webContents.send('gata')
  }
}

ipcMain.on('logat', (e, i) => {
  window.status = 'logat'
  e.sender.loadURL('https://www.pbinfo.ro/?pagina=probleme&id=' + nr)
})
ipcMain.on('gata', e => {
  let win = BrowserWindow.fromWebContents(e.sender)
  win.close()
  window.status = 'closed'
  main()
})

ipcMain.on('start', (e, _nr, rez, contKeys) => {
  nr = _nr
  problema = rez
  conturi = contKeys
  main()
})

app.on('ready', createWindow)

app.on('window-all-closed', () => {
  app.quit()
})
