    function insert(num){
        var number = window.document.querySelector('input#displaynum').value
        window.document.querySelector('input#displaynum').value = number + num
    }
    function clean(){
        window.document.querySelector('input#displaynum').value = ""
    }
    function back(){
        var total = window.document.querySelector('input#displaynum').value
        window.document.querySelector('input#displaynum').value = total.substring(0, total.length -1)
    }
    function total(){
        var total = window.document.querySelector('input#displaynum').value
        if(total){
            window.document.querySelector('input#displaynum').value = eval(total)
        }
    }

/*
    function add(num){
        // var number = window.document.querySelector('input#displaynum').value
        // window.document.querySelector('input#displaynum').value = number + num

        

        var value = document.querySelector('input#displaynum').value


        localStorage.setItem('n1', parseInt(value))

        
        // var n1 = Number.parseInt(bx1?.value)
        // var n2 = Number.parseInt(bx2?.value)
        // var add = n1 + n2
        // document.querySelector('input#num3').value = add
        // operation('input#butadd')
        insert(num)
    }
    function subtract(){
        var n1 = Number.parseInt(bx1.value)
        var n2 = Number.parseInt(bx2.value)
        var subtract = n1 - n2
        document.querySelector('input#num3').value = subtract
    }
    function multiply(){
        var n1 = Number.parseInt(bx1.value)
        var n2 = Number.parseInt(bx2.value)
        var multiply = n1 * n2
        document.querySelector('input#num3').value = multiply
    }
    function divide(){
        var n1 = Number.parseInt(bx1.value)
        var n2 = Number.parseInt(bx2.value)
        var divide = n1 / n2
        document.querySelector('input#num3').value = divide
    }

    function total(){
        var value = document.querySelector('input#displaynum').value
        localStorage.setItem('n2', parseInt(value))

        var total = parseInt(localStorage.getItem('n1')) + parseInt(localStorage.getItem('n2')) 

        document.querySelector('input#displaynum').innerHTML = total
    }
*/

function buttonnumber(){

    var butn = Array.from(document.getElementsByClassName('butnum'));

    butn.map((element, idx) => {
        element.addEventListener('mouseenter', () => {
            element.style.backgroundColor = 'gray';
            element.style.cursor = 'pointer';
        })
        element.addEventListener('mouseout', () => element.style.backgroundColor = 'rgb(160, 160, 160)')                   
    })
        
}
function buttonsignal(){

    var buts = Array.from(document.getElementsByClassName('butsig'));

    buts.map((element, idx) => {
        element.addEventListener('mouseenter', () => {
            element.style.backgroundColor = 'rgb(160, 160, 160)';
            element.style.cursor = 'pointer';
        })
        element.addEventListener('mouseout', () => element.style.backgroundColor = 'gray')                   
    })
        
}