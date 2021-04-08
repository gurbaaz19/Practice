const express = require('express');
const app = express();

app.get('/data', (req,res,next)=>{
    res.status(200).json({
        hello: "world",
        something: 25
    });
});

app.listen(8080,()=>{console.log("Server running");})