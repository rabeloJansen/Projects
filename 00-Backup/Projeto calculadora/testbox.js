function buttontest(){
    var test = window.document.getElementById('execbox')
        test.addEventListener('click', clicked)
        test.addEventListener('mouseenter', enter)
        test.addEventListener('mouseout', out)
    var img = document.createElement('img')
        img.setAttribute('id', 'photo')
        img.setAttribute('src', './package/antonio.png')
           
            function enter(){
                test.innerText = 'Clique para teste...'
                test.style.background = 'red'
                test.style.color = 'white'
            }
            function out(){
                test.innerText = 'Iniciar teste...'
                test.style.background = 'yellow'
                test.style.color = 'rgb(58, 58, 58)'
            }           
        
        function clicked(){
            test.innerText = 'Teste OK!'
            test.style.background = 'green'
            test.style.color = 'white'
            resultimg.appendChild(img)
        }
}