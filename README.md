<div id="top"></div>
<!--
*** Gracias por revisar el driver para el control del sensor MLX90316.
*** Este driver está destinado para ser implementado en una tarjeta
*** ST NUCLEO F429ZI, pero puedes adaptarlo a otra plataforma.
*** modificando los ficheros PORT! :D
-->



<br />
<div align="center">
  <a href="https://github.com/github_username/repo_name">
  </a>

<h3 align="center">DEVICE DRIVER MLX90316 / 316BDG</h3>

  <p align="center">
    Diseño de driver de control del sensor de posición rotativa MLX90316 usualmente implementado en sistemas de control de barreras FAAC.
    <br />
  </p>
</div>



<!-- ÍNDICE -->
<details>
  <summary>Índice</summary>
  <ol>
    <li>
      <a href="#acerca-del-proyecto">Acerca del proyecto</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisitos">Prerequisitos</a></li>
        <li><a href="#instalación">Instalación</a></li>
      </ul>
    </li>
    <li><a href="#uso">Uso</a></li>
    <li><a href="#contacto">Contacto</a></li>
  </ol>
</details>



<!-- ACERCA DEL PROYECTO -->
## Acerca del proyecto

[Sensor de Posición Rotatoria](https://octopart.com/mlx90316kgo-bcg-000-re-melexis-23824199?gclid=Cj0KCQjwma6TBhDIARIsAOKuANxlfohRH970JQveR_-w9bwFxDych6ouOKjobJhTG30I7Lf9W7t93DUaArM5EALw_wcB)

Como parte del proyecto final de la asignatura Protocolos de Comunicación en Sistemas Embebidos, se requiere desarrollar un device driver. El seleccionado fue un controlador para el sensor de posición rotatoria MLX90316. Este consiste en un driver tipo polling que se comunica a través del protocolo SPI con la plataforma NUCLEO F429ZI.

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started

### Prerequisitos

Para hacer uso del driver, es necesario tener conectado al sensor bajo un esquema SPI Single Die (Guiarse en la [datasheet](https://octopart.com/mlx90316kgo-bcg-000-re-melexis-23824199?gclid=Cj0KCQjwma6TBhDIARIsAOKuANxlfohRH970JQveR_-w9bwFxDych6ouOKjobJhTG30I7Lf9W7t93DUaArM5EALw_wcB)).
<br />
En el caso de querer implementarlo en una placa NUCLEO F429ZI, asegurarse de contar con el entorno de desarrollo STM32CubeIDE.
<br />
Asegurarse de contar con el imán dipolar para producir el fenómeno HALL bajo el cuál actúa el sensor.
<br />
Conectar en la siguiente distribución de pines:
  MOSI: Pin PB5.
  MISO: Pin PB4
  CLK: Pin PB3
  CS: Pin 15.
<br />
Instalar el monitor serial de su preferencia.

### Instalación

1. Cargar el proyecto en el workspace y ejecutarlo.
<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Uso

1. Acceder un monitor serial para visualizar los grados resultantes.
2. Realizar movimientos rotatorios con el imán dipolar sobre el IC.
<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTACT -->
## Contacto

Andrea García - andregarciace@gmail.com

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Agradecimientos

* [PROCELEC](https://www.procelec.ec/)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/github_username/repo_name.svg?style=for-the-badge
[contributors-url]: https://github.com/github_username/repo_name/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/github_username/repo_name.svg?style=for-the-badge
[forks-url]: https://github.com/github_username/repo_name/network/members
[stars-shield]: https://img.shields.io/github/stars/github_username/repo_name.svg?style=for-the-badge
[stars-url]: https://github.com/github_username/repo_name/stargazers
[issues-shield]: https://img.shields.io/github/issues/github_username/repo_name.svg?style=for-the-badge
[issues-url]: https://github.com/github_username/repo_name/issues
[license-shield]: https://img.shields.io/github/license/github_username/repo_name.svg?style=for-the-badge
[license-url]: https://github.com/github_username/repo_name/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/linkedin_username
[product-screenshot]: images/screenshot.png
