# Computación Ubicua - FakeNanoLeaf

- David Emanuel Craciunescu
- Adrián Martínez Díaz
- Raúl Pradanas Martín

---

# Introducción

Dada la gran evolución del sector IOT y la, cada vez mayor, preferencia hacia el mundo LED, no
es sorprendente que estos dos mundos se acabaran juntando. Los paneles LED inteligentes son cada
vez más populares y representan un gran porcentaje de los _things_ del _Internet of Things_.

Estos tipos de paneles, inicialmente poco llamativos, pueden cambiar completamente el ambiente
de un espacio interior. Además, dado que emplean tecnología LED, su gasto es prácticamente
insignificante en comparación al consumo total del hogar en el que seguramente se encuentren.

El objetivo de este proyecto es la creación de un sistema inteligente con la habilidad de controlar
el funcionamiento de unos módulos luminosos en tiempo real. El sistema recuerda a los productos de la
compañía Nanoleaf, y se podría decir que estos han servido de inspiración para este proyecto. Aunque se
trata de un producto relativemente simple, este tipo de proyectos son altamente visuales y tienen una
gran capacidad para mejoras o modificaciones futuras.

## Situación actual
Esto no es nada nuevo, y se empezó a ver desde que las _LED Strips_ salieron al mercado. Aunque inicialmente
controladas por mandos preprogramados, los fabricantes no tardaron mucho en darse cuenta que podían entregarle
el control al cliente desarrollando aplicaciones que permitieran mucha más personalización. Con esto, los clientes
podrían transformar las luces en aquello que quisieran y las compañías obtendrían beneficios mucho mayores.

Hoy en día se pueden encontrar productos de este estilo en todas partes. Una búsqueda rápida en distribuidores
online como Amazon nos devolverá miles de resultados instantáneamente. Muchas de las tiendas del hogar españolas
también ofrecen productos de este estilo e incluso tienen secciones enteras dedicadas a ellos, y cada vez es más
complicado __no__ encontrar la sección de LEDS cuando uno va al Leroy Merlin.

Nos podemos encontrar con una enorme variedad de luces LED, pero podemos clasificar la mayoría en dos categorías:
- __1. Luces LED pasivas:__ Este tipo de sistemas generalmente vienen preprogramados. Las luces alternan entre
patrones limitados y generalmente se suelen controlar con un mando remoto simple que no permite mucha
personalización.
- __2. Luces LED interactivas:__ La otra categoría se trata de luces LED que interactúan con el ambiente. Estas
generalmente pueden ser controladas con aplicaciones móviles o con la ayuda de asistentes de voz. Algunas
de estas también tienen módulos independientes que permiten la sincronización con música u otro tipo de
señales.

## Predicción de fin de proyecto y audiencia
Una vez acabemos el proyecto, nuestra intención es haber creado un producto capaz de servir como decoración
luminosa de un espacio interior. Nos gustaría que este producto fuera simple y lo suficientemente barato
como para suponer una alternativa económica y de confianza a los sistemas de paneles luminosos ya existentes.
Estos generalmente incluyen muchas funcionalidades, pero vienen de la mano con un precio desorbitado que la
mayoría de consumidores son incapaces de afrontar teniendo en cuenta el valor que estos dispositivos pueden
aportar a su vida cotidiana.

# Alcance del proyecto
Como se mencionó previamente, esta idea no es nueva, y ya existen sistemas inteligentes luminosos con tecnología
LED en el mercado. El objetivo principal del proyecto es la creación de un prototipo que sea lo suficientemente
bueno para el consumidor medio que esté más preocupado por el precio del dispositivo que por el aspecto estético
y el gran abanico de herramientas que este pueda aportar. Se busca ahorrarle al consumidor final el esfuerzo
de tener que comparar entre productos, filtrar según precio y ver qué es lo que aporta cada uno. En definitiva,
se pretende que el proyecto sea una gran opción en relación calidad-precio.

El producto puede ser descrito como una combinación de los dispositivos físicos y el software que los acompaña.
Van en conjunto y son un paquete, por lo que no pueden ser vendidos por separado. El dispositivo se encarga de
la propia iluminación, y el software es una simple interfaz que permite a los usuarios controlar el dispositivo.

En cuanto a futuras posibles funciones o mejoras, se consideran diferentes interfaces, control desde múltiples
dispositivos, o la posibilidad de crear patrones complejos personalizados por el propio usuario. Como bien
mencionamos previamente, las posibles mejoras y modificaciones para este tipo de proyectos son solo limitadas
por la imaginación de cada uno.

---

# Ideas descartadas

Dentro de las ideas descartadas se encuentran:
- __El uso de un ESP8266.__ Nuestra primera opción fue emplear un chip ESP8366, aunque rápidamente optamos por el ESP32,
dado su superior rendimiento. Este incremento de rendimiento viene con un lógico incremento de precio, pero este es
comprensible y asumible, resultando una mejor opción bajo nuestra opinión en relación calidad-precio.
- __Integración con asistente virtual.__ No se trata de una idea descartada tanto como una posible mejora futura.
Se consideró que este tipo de integraciones serían demasiado complicadas para el timeframe limitado de desarrollo
del proyecto. Por tanto, se dejaron como mejoras futuras.
- __Creación de una aplicación web.__ Altamente innecesario, considerando que el usuario medio no estaría dispuesto
a logearse en una página web cada vez que quisiera cambiar el color de sus luces. Una simple aplicación móvil es una
solución mucho más simple y elegante.
---
# Tecnología descartadas
En esta sección incluiremos aquellas tecnologías que hemos estudiado pero que finalmente no utilizaremos 
en nuestro proyecto
---
# Tecnología a usar

En esta sección se pueden encontrar diferentes opciones que se consideraron y las decisiones
que le dieron forma al proyecto y a la tecnología que utilizar. Estas decisiones siempre han
tenido en cuenta la experiencia de los distintos miembros del grupo, el precio de los componentes,
su disponibilidad, y la confianza que el manufacturador pueda inspirar.

## Controladores

### Raspberry Pi
Según la página oficial de Raspberry Pi: __"Raspberry Pi es un ordenador de bajo coste
del tamaño de una tarjeta de crédito que se conecta a un monitor o a una televisión, y 
usa ratón y teclado estándar. (...) Es capaz de hacer lo que normalmente esperarías de
un ordenador normal, desde navegar por internet y reproducir video en alta definición,
a hacer hojas de cálculo, procesamiento de palabras, y jugar a videojuegos"__.

Esta opción es extremadamente atractiva, dado que uno podría ser capaz de programarlo como
cualquier otro ordenador normal, y hacer que este hiciera lo que se quisiera. Esto hubiera
sido ideal, dada la simplicidad de su uso y el hecho de que es compatible con cualquier
lenguaje de programación que se pueda ejecutar en un ordenador, es decir, todos. Al final
se descartó porque la Raspberry Pi era demasiado grande en comparación al resto de elementos
del proyecto.

### ESP32
Los ESP32 son una serie de microcontroladores __System on a Chip__ de bajo coste y bajo consumo
con Wi-Fi y Bluetooth integrados. Estos microcontroladores acabaron siendo la opción obvia para
este tipo de proyecto. Su flexibilidad, precio y simplicidad de uso fueron factores indispensables
a la hora de escoger esta tecnología.

### Arduino
Arduino es una plataforma de componentes electrónicos open-source que se basa en software y 
hardware de fácil uso. Las placas que Arduino vende son controladas mediante el envío de
instrucciones a un microcontrolador en la placa. Esto funciona gracias al lenguaje de
programación Arduino, que se basa en Wiring, y al __Arduino Software (IDE)__, que se basa en
Processing.

Estas placas son extremadamente fáciles de usar. El lenguaje de programación es muy similar a C,
y la comunidad Arduino ofrece un gran abanico de recursos gratuitos, y que mejoran la calidad
y reducen el esfuerzo de cualquier proyecto que intente usar Arduino.

Con todos estos beneficios, el __lenguaje__ Arduino fue considerado una buena opción, dado que es
compatible con el ESP32. 

## Sensors

### LDR
Nuestra primera opción es el uso de una resistencia fotovoltaica la cuál responderá con un voltaje alto o bajo dependiendo de la cantidad de luz que se irradie sobre el mismo en cada momento. Es una opción muy buena debido a su calidad precio y a la gran eficiencia energética que supone implementarlo.

### IR
Ll sensor infrarrojo es un dispositivo optoelectrónico capaz de medir la radiación electromagnética infrarroja de los cuerpos en su campo de visión.

Todos los cuerpos emiten una cierta cantidad de radiación, esta resulta invisible para nuestros ojos pero no para estos aparatos electrónicos, ya que se encuentran en el rango del espectro justo por debajo de la luz visible.

### Sensor de ondas
El sensor de ondas también conocido como radar, funciona generando un campo electromagnético que transmite y recibe las ondas que él mismo ha generado. esto hace posible que el sensor haga un "mapeo" del entorno donde se encuentra y pueda transmitir esta información al resto del sistema.

Como puede ser la entrada de cualquier objeto a cierta área determinada, cambios eb el entrono, etc.

## Periféricos
### LEDs
No hay mucho que explicar. El proyecto mismo se trata de paneles luminosos LED.

## Lenguajes y Plataformas
Consideramos los siguientes lenguajes y plataformas para el proyecto. 

### FreeRTOS
FreeRTOS es un sistema operativo en tiempo real diseñado para correr en sistemas embebidos,
lo que es de gran valor, especialmente para dispositivos IoT. Fue diseñado con este tipo de
dispositivos en mente, y también ofrece scheduling, comunicación entre tareas, y primitivas
de sincronización nativamente. Todo esto se manifesta gracias a una kernel diseñada con extremo
detalle, y un sistema que puede ejecutar tareas en el momento preciso en el que tienen que ser
ejecutadas, determinísticamente.

En este sistema operativo, las aplicaciones pueden ser asignadas estáticamente, mientras que
los objetos lo pueden ser dinámicamente, con diferentes esquemas de asignación de memoria.
Este sistema era altamente prometedor, pero acabó siendo demasiado complejo para el producto
y el problema que queríamos resolver. Con esto, FreeRTOS fue rápidamente descartado.

### Mongoose OS
Mongoose OS es un framework de firmware diseñado específicamente pera el
desarrollo de productos IoT. Es compatible con una gran gama de microcontroladores. Se
supone que es compatible con ESP32 también. El equipo descubrió más tarde que esto no
sería una buena opción, aunque inicialmente prometedora. La compatibilidad es un
auténtico problema.

### Arduino IDE
Se hizo obvio que buscar una solución diferente a Arduino IDE no era una buena idea. Arduino
es un projecto de software y hardware open-source con el respaldo de una tremenda comunidad.
Este viene con un editor de texto, una zona de mensajes, una consola integrada, y básicamente
cualquier herramienta que pudiera hacerle falta a un desarrollador. Los lenguajes de programación
están limitados a C y C++, pero con algunas reglas que estructuran el código de manera diferente.

También hay muchas librerías ya desarrolladas para tareas como control de robots u operaciones de
Input/Output. Esta es la opción que el equipo acabó escogiendo. De hecho, terminó siendo la única
decisión viable.

### Blynk App
Para simplificar el desarrollo de la aplicación, el equipo ha decidido emplear la plataforma Blynk.
Esta no está limitada a ningún hardware en específico, y solo requiere que el proyecto esté conectado
a internet. Blynk es una plataforma que proporciona soluciones para el desarrollo IoT. Esta se basa en una app
compatible con Android e iOS, que se comunica con el hardware a través de los propios servidores
de la plataforma. La aplicación permite diseñar muy fácilmente un paneles de control para las
aplicaciones que queramos desarrollar, además de ser compatible conn un gran abanico de dispositivos
hardware, y venir con librerías ya desarrolladas. Estas librerías resuelven la mayor parte de los
detalles de la comunicación __con la app__, permitiendo que los desarrolladores se enfoquen en los
detalles de su proyecto.

#### Metodología de desarrollo
Al hablar de proyectos, uno de los procesos más importantes, si no es más importante,
es la __metodología de desarrollo__. Gracias a estas metodologías, un producto
puede ser creado de una manera meditada y organizada. Una metodología de
desarrollo no es más que el proceso de planificar, crear, testear, y desplegar un
proyecto. La única diferencia entre la gran variedad de metodologías se encuentra
en cómo interactúan esas piezas las unas con las otras.

La metodología que empleamos para este proyecto específicamente es __Lean with Kanban__.
El grupo escogió esta por los siguientes motivos:

1. Enfoque en el objetivo. 
Una de las metas del equipo era no perder de vista el objetivo. Esto permite
mantener al equipo por buen camino pase lo que pase.

2. Orientado al equipo.
En equipos con miembros extremadamente motivados, cada uno de los miembros
es parte del proceso, y __todos__ toman las decisiones, y definen su propio
trabajo en relación a las decisiones mismas. Los miembros pueden dividir
el trabajo entre ellos mismos sin necesidad de largas reuniones, planificación
extremadamente específica, o pasos incrementales bien definidos.

3. Entrega rápida.
Soluciones simples. Iteraciones de trabajo cortas. Triunfos rápidos.

4. Toma de decisiones demorada.
__Lean__ demora las decisiones hasta que son absolutamente necesarias y los
requisitos están siendo cumplidos. Esto permite que los proyectos cambien, se adapten,
y transformen en diferentes entidades a la vez que evolucionan, en vez de verse forzados
a cuadrar con una serie de pautas rígidas basadas en decisiones __apriori__. Los proyectos
se transforman estrictamente en lo que deben ser, y nada más.

5. Mejora del conocimiento.
Si cada miembro tiene una serie de funciones definidas dentro del equipo, pedir ayuda
es mucho más simple. cada vez que alguien necesita ayuda o tienen tiempo para ayudar
a otra persona, lo pueden hacer sin problema. Con esto, el equipo se mantiene ágil y flexible.

6. Reducción de elementos innecesarios.
La simple aplicación del principio KISS: "Keep It Simple, Stupid", todo lo que no es
absolutamente necesario es eliminado.

---

Si uno combina todo esto con Kanban, pueden obtener un sistema organizacional extremadamente
eficiente y efectivo, además de una metodología de desarrollo espectacular. Kanban ayuda a
incrementar la visibilidad dramáticamente, y hace todo el proceso extremadamente intuitivo.

Esta metodología es usada actualmente por muchas startups, como IMVU. Esta compañía fue creada
por Eric Ries, que creó otra metodología llamada __Lean Startup__. Esta es simplemente una
versión mejorada de lo que este proyecto usa, pero diseñada específicamente para adaptarse
a la manera de funcionar de una startup.

El punto de comienzo para nuevos ciclos de desarrollo en Lean Kanban es la idea individual. La idea
es entonces compartida con el resto del equipo y entonces considerada. Si es válida, se desarrolla
para analizar si tendría sentido integrada junto con el resto de ideas que ya forman el proyecto.
Si se considera una buena feature, se añade, y se descarta si no lo es. Con este proceso, el peor
caso posible sigue siendo obtener conocimiento sobre cómo crear e implementar esa idea en concreto.
Aunque acabe siendo descartada, su implementación sigue retornando valor, dado que se obtiene el
conocimiento de cómo hacer algo de ese estilo en un futuro.

#### Implementación de la metodología

El equipo ha decidido mantenerlo todo bastante flexible y simple. Para aplicar la metodología de una
manera efectiva, el equipo ha usado las herramientas de colaboración de __GitHub Projects__. Esto
está oficialmente integrado como parte del software de la Universidad de Alcalá gracias al programa
GitHub Education.

Al reunirnos semanalmente, la dinámica del equipo fue (1) comprobar el proyecto de la semana, (2) 
pulir cualquier detalle que se pudiera haber quedado en la icebox, (3) decidir qué dirección debería
de tomar el proyecto para la siguiente semana, (4) proponer features y (5) asignar tareas a cada
miembro. Esto asegura la máxima visibilidad del proyecto y un enfoque altamente flexible.

Todo ello lo hemos complementado mediante una serie de reuniones diarias (daily) de no más de 10 
minutos pero interesantes, con el objetivo de poder resolver las dudas que a cualquiera de los 
integrantes del trabajo nos pudieran surgir.

Una de las claves para este proceso fue la creación de Milestones de Github Projects. Con esto, los
miembros pueden organizar sus ideas en categorías que tienen sentido según cada momento del proyecto.
Otra forma de llamarlos sería Agile Sprints.

Esto es un ejemplo de Milestone.
![Primer Milestone](https://i.imgur.com/Zwe4XTh.png)

Con esto, y la Tabla Gantt mensual genérica que se creó para guiar el proyecto a grandes pinceladas,
la capacidad del equipo para desarrollar ágilmente y flexiblemente se pudo mantener fácilmente, mientras
que el proyecto no perdía su dirección.
![Gantt Chart](https://raw.githubusercontent.com/ubiqcomp/capacity/main/media/Reliable%20Systems.gif)

---

# Arquitectura de la aplicación

Para llegar a desarrollar el producto hemos implementado **4 capas**: 
 + **Perception Layer:** En esta capa nos encontramos con el **ESP32** que es la esencia de nuestro producto. Además tenemos la tira de 60 LEDs RGB y el resto de sensores, un **módulo LDR** y un **módulo sensible al sonido** que serán los encargados de interactuar con el entorno.
 + **Network Layer:** En esta capa se encuentra toda lo relaciona con la aplicación Blynk, tanto las librerías como todas las API que este contiene, y que se explicarán más adelante. La utilidad de esta capa será la de conectar la **Perception Layer** con la **Processing Layer**.
 + **Processing Layer:** Esta capa tenemos todos los componentes que contiene: 
   + **Server:** usaremos el servidor que nos proporciona Blynk y con el que seremos capaces de conectar la capa de aplicación con el resto de las capas de la arquitectura.
 + **Application Layer:** en esta última capa está la aplicación movil que ha sido desarrollada y codificada tanto con el entorno Blynk como con Arduino IDE.


---

# Modelo de Negocio

Hay muchos factores que tener en cuenta cuando se trata de vender y convencer a
consumidores para que compren un producto. Hay una enorme cantidad de pequeños
detalles que tener en cuenta, desde la demográfica objetivo, hasta el país en el
que el producto sería comercializado. El plan debe estar bien pensado para funcionar
correctamente.

De todas las cosas que una nueva compañía se debe de preguntar a sí misma, qué es
lo que ofrece seguramente sea la cuestión más importante. ¿Qué crea la compañía
que ofrece valor a sus potenciales consumidores?

## Oferta. Propuesta de Valor

Prácticamente todo el mundo querría tener iluminación con paneles LED en su hogar
si estos fueran simples, de confianza, y baratos. Otras personas los perciben
como demasiado complicados o foráneos. No entienden cómo funcionan, y tenerlos
en sus hogares les crea estrés. "¿Qué es lo que hago si se estropea? No voy a gastar
tanto dinero para luego tirarlo a la basura", es algo que se oye con frecuencia. 

Aunque hoy en día los sistemas sean cada vez más intuitivos, muchas personas,
siguen evitando el mundo IoT. FakeNanoLeaf puede asegurar a su clientela que
el principio que siguen en todos sus productos es el de simplicidad e invisibilidad.
Son productos pensados para parecer parte del hogar, para que la interacción con
ellos sea tan natural que en ningún momento pueda parecer extraño a un hogar.

El producto mismo se adapta a las necesidades de cada persona. El software puede
ser conectado a cualquier cantidad de paneles LED. Es tan simple como instalarlos,
configurarlos desde la app, y tener control instantáneo sobre el dispositivo.

## Clientela
En esta sección se puede encontrar la información relacionada a los clientes, el punto
de vista que se les debe presentar, los segmentos de clientela, etc

### Segmentos de Clientes

No todo el mundo va a estar interesado en los productos que FakeNanoLeaf vende. Muchos
clientes preferirán invertir más dinero en sistemas con muchas más funcionalidades,
tal vez incluso de la compañía NanoLeaf misma, bajo el concepto erróneo de que "más caro 
es igual a mejor".

Siguiendo una estrategia de segmentación enfocada a la percepción del público, simplicidad,
y la necesidad de sistemas de confianza, uno puede fácilmente percibir que __FakeNanoLeaf__
seguramente sea más atractivo para clientes con menos poder adquisitivo, y que se vean 
intimidados por una compra de sistemas de alta gama, con funcionalidades sobrediseñadas.
Otra opción sería venderlo a compañías que buscaran iluminación de ambiente temporal, y que
solo se preocuparan por el precio de la misma, y no por todas las funcionalidades que este
sistema pueda tener.

El abanico de posibilidades es grande, dado que solo la imaginación limita la decoración
luminosa de un espacio. Se piensa que este tipo de sistemas seguramente sea más atractivo
al consumidor individual, pero no se descarta que otros sectores puedan desarrollar
interés por tecnologías así.

### Canales
Existe una gran necesidad a la hora de diversificar los canales que una compañía puede
emplear para transmitir su proposición de valor a sus clientes potenciales. Es de una
enorme importancia que cada segmento de cliente sea enfocado con un estilo bien pensado, 
específico, y una estrategia de comunicación adecuada. El enfoque que se toma para este
producto es un modelo mixto entre D2C (direct to customer) y B2C (business to customer).
Esta estrategia suele ser altamente efectiva para productos de este estilo, 
dado que se facilita mucho el proceso de compra para el cliente, aunque pueda ser 
un proceso más complejo para la compañía.

El producto sería distribuido para uso individual, vendido directamente desde la página
web de FakeNanoLeaf, aunque también comercializado en tiendas del hogar o en distribuidores
de este tipo de sistemas. Con esto se consigue crear el efecto de que el producto se
encuentra en todos lados, e incitar a la potencial clientela a comprarlo en base a
exposición repetida al mismo. Para atraer más atención a FakeNanoLeaf, se pueden emplear
diferentes segmentos publicitarios en redes sociales, especialmente enfocados a la demográfica
objetivo. Además, las propias tiendas que vendieran estos sistemas como __middlemen__
emplearían parte de sus propios segmentos para publicitar el producto.

La estrategia más efectiva sería la de sponsorship a diferentes influencers en redes
sociales. Dado que es un producto altamente visual, enviar unidades promocionales
de prueba a este tipo de figuras públicas aseguraría que el producto fuera expuesto
a sus seguidores en las redes, que seguramente acabaran desarrollando algún tipo de
interés en el mismo.

### Relación con clientes

La compañía no cortaría la relación con su clientela una vez los clientes adquieran el
producto. FakeNanoLeaf creará una cuenta de correo electrónico y abrirá lineas telefónicas
especialmente para clientes, para que los que tengan problemas con el producto, o necesiten
solicitar cualquier tipo de información, puedan contactar con la compañía directamente.
Se proporcionará asistencia personal durante todo el proceso de compra: antes, mientras, y
después del mismo.

FakeNanoLeaf también tiene intención de crear una comunidad online donde se puedan compartir
problemas comunes y sus soluciones. Esta comunidad sería poblada con expertos de producto que
podrían emplear esto como otro canal de ayuda para clientes que se enfrentan a problemas. A
través de esta plataforma, los consumidores también podrían proponer diferentes ideas
a la compañía sugiriendo mejoras que podrían hacer el producto más eficiente.

## Infraestructura

### Actividades Clave

Para ejecutar correctamente la propuesta de valor de FakeNanoLeaf, se seguirán las siguientes
actividades clave: (1) el desarrollo físico del producto, (2) el desarrollo software del producto,
(3) y la creación de las interfaces que se puedan conectar con el mismo. Esto hace que las actividades
clave no sean solo limitadas a la creación del producto mismo, pero también todas las herramientas y
funcionalidades que lo rodean.

En el aspecto no técnico, otra actividad clave sería conseguir la atención de los clientes
potenciales de la compañía mediante los canales propuestos, y así crear conocimiento sobre
el producto en el mercado. Este esfuerzo se traduciría en la compra del producto por consumidores.

### Recursos Clave

Con el objetivo de crear el producto y sostener el sistema de la compañía, los recursos clave
que harían falta se pueden clasificar en (1) los componentes y elementos que crean el sistema
físico mismo, y (2) el capital humano necesario para el diseño, la creación, testeado, y el
matenimiento del software que hace que el sistema físico funcione correctamente.

### Red de Socios

Para cualquier compañía, especialmente las nuevas, las alianzas y colaboraciones son de
extrema importancia. Estas alianzas optimizan las operaciones de las compañías y reducen
el riesgo potencial al que se tienen que enfrentar, y así las diferentes entidades se
encargan exclusivamente de lo que les corresponde. En este caso, tratamos la creación
y launch de FakeNanoLeaf.

Se podría decir que la alianza más importante de FakeNanoLeaf es con los canales de publicidad
de redes sociales de los cuales depende para hacer que su producto sea conocido, especialmente
de las figuras públicas que se encargarían de publicitar el producto. Tambíén, dado que la
metodología de distribución también cae a cargo de la compañía, existe una cierta dependencia
con los distribuidores físicos del producto al cliente. El producto puede ser vendido online,
o a través de distribuidores, pero sigue teniendo que llegar al cliente para que estos puedan
usarlo. Para asegurarnosde que la calidad del producto se mantiene y la percepción de la
compañía es una favorable, escoger los socios correctos es un movimiento crucial.

## Finanzas

### Estructura de Coste

FakeNanoLeaf beneficiaría claramente de un modelo de negocio cost-driven, dado que el mayor
sector de cliente de la compañía se trata justo de personas que escogen el producto porque
es una gran opción en relación calidad-precio. La compañía intentará minimizar los costes
constantemente, siempre teniendo en cuenta que no hay que reducir la calidad del producto
en el proceso. 

Cuando se trata de los costes mismos, las actividades clave que generarán más gastos están
formadas por el desarrollo de los dispositivos físicos, y la creación de las interfaces a las
que se conectan. Un factor extremadamente beneficioso podría ser alcanzar "economies of scale",
que se consiguen más fácilmente cuando se vende a un distribuidor. Como el plan es mixto, esto
también se podría considerar como una opción, ya que decrementaría el coste individual cuanto
más creciera la cantidad de unidades vendidas.

### Fuentes de Ingresos
Las fuentes de ingresos de la compañia seían inflexibles y no muchas. FakeNanoeLeaf no busca
competir con los gigantes de los paneles LED. Todo lo contrario, la compañía se enfoca en el
cliente que se quiere alejar de toda la complejidad y el alto precio que van de la mano con
sistemas "de esta calidad". Los clientes estarían dispuestos a pagar un precio razonable
por un producto que es lo suficientemente bueno y de confianza.

Cuando nos fijamos en el mercado, el coste del material para crear el producto está alrededor
de $80. Otros precios fijos deben ser añadidos, como el desarrollo de las interfaces, el
coste operacional, el marketing base, etc. Fijándonos en los competidores más cercanos a este
producto, un precio razonable y justo sería de $100US.

Este precio puede parecer bajo inicialmente, y es porque lo es. El objetivo que se tiene es el
de popularizar el producto, aunque sea con un beneficio muy reducido, o incluso bajo pérdida,
con el objetivo de obtener mejores ofertas con los proveedores de los materiales que hacen 
falta para el producto. Con esto, se mantendría el precio original, pero el coste de fabricarlo
se reduciría altamente, y el margen de beneficio se incrementaría.

## Marketing

Para conseguir clientes y mantener el negocio a flote, hay muchos aspectos que tener en cuenta.
Desde la forma en la que los clientes puedan percibir la compañía o el producto, hasta el
sentimiento mismo que puedan tener sobre él; la compañía __debe__ maximizar sus labores en cuanto
a marketing y el producto de la mejor manera posible. El equipo de marketing de FakeNanoLeaf ha
creado la siguiente serie de reglas y recomendaciones a seguir al enfrentarse a estas labores.

### Percepción y diferenciación

En cuando a la percepción de la compañía, FakeNanoLeaf quiere enfocarse al mercado bajo un ángulo
que podría ser caracterizado como el de un buen amigo: simple, honesto, y de confianza. Los factores
más importantes que la compañía tendría que tener internamente y respecto al mercado son los siguientes:

- __Simple__.  Tan simple, de hecho, que el propio producto es una versión simplificada de productos
ya existentes con el objetivo de elmiminar complejidad innecesaria. La compañía quiere transmitir
que se puede confiar en ellos, y que saben lo que hacen.
- __Presente__. La conexión con el cliente es extremadamente importante. Esto puede ser conseguido
mediante las redes sociales y la presencia online. No se debe ignorar este aspecto, especialmente
en la era de la información y comunicación.
- __Honesta__. Ninguna de las características anteriores puede ser transmitida correctamente si
no se mantiene una relación honesta con sus clientes. La compañía debe inspirar confianza a su clientela
para que estos sientan seguridad a la hora de comprar sus productos.

---

# Análisis de Riesgos
Se adjunta un excel con los datos de este apartado.



# Conclusiones

En conclusión, el producto que la compañía ofrece está diseñado para competir como el preferido en
relación calidad-precio. El objetivo de FakeNanoLeaf es conseguir apelar a la parte del mercado que
no participa en el mismo dado el precio de los productos, y no por falta de interés en los mismos.

Esta propuesta iniciativa, aunque no novedosa, encuentra así su propio nicho de mercado, el cliente
previamente no convencido. Además, con el plan de imagen y marketing que la compañía ha diseñado y
propone, el producto se puede transformar en la opción _de facto_ dentro de este sector de mercado.
