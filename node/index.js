const express = require("express")

const app = express()

app.use(express.json())
app.use(express.urlencoded({ extended: true}))

app.get('/products', (req, res) => {
    const produtos = ['chinelo', 'cadarço']

    "SELECT id, name FROM PRODUCTS WHERE id = 24"

    res.send({
        produtos
    })
})

app.get('/products/:id', (req, res) => {
    const identificador = req.params.id;
    
    if (identificador === '23') {
        return res.send(`cadarço`)
    }

    if (identificador === '24') {
        return res.send(`chinela`)
    }

    res.send(`produto: ${req.params.id}`)
})

app.get('/stores', (req, res) => {
    res.send('Hello World!')
})

app.get('/stores/:id', (req, res) => {
    res.send('Hello World!')
})

app.get('/carts', (req, res) => {
    res.send('Hello World!')
})

app.get('/carts/:id', (req, res) => {
    res.send('Hello World!')
})

app.get('/orders', (req, res) => {
    res.send('Hello World!')
})

app.listen(3000, () => {
    console.log('Example app listening on port 3000!')
})