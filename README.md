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
      <a href="#about-the-project">Acerca del proyecto</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Uso</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>



<!-- ACERCA DEL PROYECTO -->
## ACERCA DEL PROYECTO

[![Sensor de posición rotatoria][product-screenshot]](https://octopart.com/mlx90316kgo-bcg-000-re-melexis-23824199?gclid=Cj0KCQjwma6TBhDIARIsAOKuANxlfohRH970JQveR_-w9bwFxDych6ouOKjobJhTG30I7Lf9W7t93DUaArM5EALw_wcB)

Como parte del proyecto final de la asignatura Protocolos de Comunicación en Sistemas Embebidos, se requiere desarrollar un device driver. El seleccionado fue un controlador para el sensor de posición rotatoria MLX90316. Este consiste en un driver tipo polling que se comunica a través del protocolo SPI con la plataforma NUCLEO F429ZI.

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started

### Prerequisites

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

### Installation

1. Cargar el proyecto en el workspace y ejecutarlo.
2. Acceder a un monitor serial para visualizar los grados resultantes.
3. Realizar movimientos rotatorios con el imán dipolar sobre el IC.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## USO

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [ ] Feature 1
- [ ] Feature 2
- [ ] Feature 3
    - [ ] Nested Feature

See the [open issues](https://github.com/github_username/repo_name/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Your Name - [@twitter_handle](https://twitter.com/twitter_handle) - email@email_client.com

Project Link: [https://github.com/github_username/repo_name](https://github.com/github_username/repo_name)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* []()
* []()
* []()

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
