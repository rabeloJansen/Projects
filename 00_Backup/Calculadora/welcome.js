function day(){
    var msg1 = window.document.querySelector('div#hour') /*ou getElementById('hour') */
    var img = window.document.querySelector('img#image')
    var date = new Date()
    var hour = date.getHours()
    var minutes = date.getMinutes()
    msg1.innerHTML = `Agora são <strong>${hour}:${minutes}</strong>, e hoje é`

    if(hour >= 0 && hour < 12){
        img.src = "./package/morning.png"
        document.body.style.background = "#e2cd9f"
        // morning
    } else if (hour >= 12 && hour < 18){
        img.src = "./package/afternon.png"
        // afternon
    } else{
        img.src = "./package/night.png"
        document.body.style.background = "#515154"
        //night
    }
}
function load(){
    var msg2 = window.document.querySelector('div#day')
    var date = new Date()
    var day = date.getDay()

    switch(day){
        case 0:
            msg2.innerHTML = '<strong>DOMINGO</strong>, tenha um ótimo dia!'
            break
        case 1: 
            msg2.innerHTML = '<strong>SEGUNDA-FEIRA</strong>, tenha um ótimo dia!'
            break
        case 2:
            msg2.innerHTML = '<strong>TERÇA-FEIRA</strong>, tenha um ótimo dia!'
            break
        case 3:
            msg2.innerHTML = '<strong>QUARTA-FEIRA</strong>, tenha um ótimo dia!'
            break 
        case 4:
            msg2.innerHTML = '<strong>QUINTA-FEIRA</strong>, tenha um ótimo dia!'
            break 
        case 5: 
            msg2.innerHTML = '<strong>SEXTA-FEIRA</strong>, tenha um ótimo dia!'
            break
        case 6: 
            msg2.innerHTML = '<strong>SÁBADO</strong>, tenha um ótimo dia!'
            break
    /*
        0 = DOMINGO
        1 = SEGUNDA
        2 = TERÇA
        3 = QUARTA
        4 = QUINTA
        5 = SEXTA
        6 = SÁBADO
    */
    }
}