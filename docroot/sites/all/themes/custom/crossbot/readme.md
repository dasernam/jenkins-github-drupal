### What is Sass
From [sass-lang.com](http://sass-lang.com/):
"Sass is an extension of CSS3, adding nested rules, variables, mixins, selector inheritance, and more. It’s translated to well-formatted, standard CSS using the command line tool or a web-framework plugin."

We use Sass to give structure, order, and power to our stylesheets. This document will explain how to set up a Sass environment for your local development, and supply a basic understand of file structure.

### Installation and Setup
1. Install Ruby on your machine. If you’re using OS X, you’ll already have Ruby installed. Windows users can install Ruby via the [Windows installer](http://rubyinstaller.org/downloads/), and Linux users can install it via their package manager.
2. ```sudo gem install bundler``` to install the gem package manager
3. Navigate to the theme folder via your command line and run ```bundle install```. This will download all of the required gems for the project
4. From the same directory, run **compass watch** to start compiling Sass into css.

### File Organization

* **scss** - any file in this folder that does not start with an underscore gets compiled into the stylesheets folder
    * **base** - page theme styles i.e. general styles not attached to a specific block/component
        * **html** - styles within the scope of the html.tpl.php file, including individual element base styles, typography and font-faces
        * **page** - styles within the scope of the page.tpl.php, mostly backgrounds, borders, and other decoration
       * **vendor** - 3rd party CSS like Normalize.css or Slideshows
    * **components** - individual partials for each block/component on the page. examples are blog post, upcoming event, front-advert, reusable UI element
        * these partials are organized into folders by region or theme. Sass globbing allows us to import ALL of the files in this components folder with implicetely stateing them. This makes organizing and renaming much easier.
    * **global** - The basic rule of this folder is that all of these partials have zero output into the css file.
        * **mixins** - Mixins are reusable pieces of code that get printed to css every time that they are used. You can pass variables into mixins much like a PHP function. All mixins are sass-globbed so feel free separate out mixins into individual partials when suitable
        * **extends** - similar to mixins, extends allow you to re-use chunks of css, but instead of printing out the css each time it is used the original class is 'extended' and the extended selector is added to list of selectors i.e. .extend, .extended-class, .other-extended-class{}. Extends are primarily used to apply title, copy and other decorative styles that are used over and over again in the design.
        * **_functions.scss** - Functions are little helpers that let you quickly run calculations and return some kind of output. This might get broken down into a folder and partials if this file gets too large.
        * **_variables.scss** - This important file lets you set a series of variables that determine colors, sizes, grid settings, breakpoints and other often used values. Most of the typography styles are set here and then applied in the actual typography partial.
    * **layout** - seperating theme from layout is important in making modules highly re-usable. This folder holds all of layout styles for major page regions as well as individual presentation of blocks/components. Rule of thumb is that if you are position elements to the left or right, it should be done on the grid, in a layout partial.
    * **style.scss** - The ONLY partial that actually gets compiled! This partial is simply a manifest of all of the partials, in order, as they should be compiled into the outputed css file. No actual styles ever get put into this file.

### Styling Philosophies
* If a style can be reused, it is usually best to create it as an extend ```global/extend``` and then apply it to the selector with @extend.
* Even if the style is only used once right now, creating it as an extend allows it to reused later, and keeps all of the title, copy, and decorative styles in a single place.
* By convention we use the silent placeholder for any extend we create ```%extend-name```. This reduces the risk of extending more than one class, and helps to denote that this extend can be found in the extends folder.
* Decorate extends like image borders/rounded corners and box styles, like sidebar block backgrounds and borders, can also be found in the extends folder. This way it does not matter if we are applying this style to all of the sidebar blocks at once, or if we are applying it in every sidebar compontent file, the styles can always be adjusted in the same place.
