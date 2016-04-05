'use strict';

module.exports = function (grunt) {

  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),

// Watch for changes and trigger compass, jshint, uglify and livereload
    watch: {
      compass: {
        files: ['sass/{,**/}*.scss'],
        tasks: ['compass:dev']
      },
      js: {
        files: '<%= jshint.all %>',
        tasks: ['jshint', 'uglify:dev']
      },
      livereload: {
        options: {
          livereload: true
        },
        files: [
          'css/style.css',
          'js/*.js',
          'images/{,**/}*.{png,jpg,jpeg,gif,webp,svg}'
        ]
      },
      templates: {
        files: 'templates/*.tpl.php',
        tasks: ['drush:cc_theme_registry']
      }
    },

    // Compass and scss
    compass: {
      options: {
        bundleExec: true,
        httpPath: '/sites/all/themes/dcammp-demo',
        cssDir: 'css',
        sassDir: 'sass',
        imagesDir: 'images',
        javascriptsDir: 'js',
        fontsDir: 'css/fonts',
        assetCacheBuster: 'none'
      },
      dev: {
        options: {
          environment: 'development',
          outputStyle: 'expanded',
          relativeAssets: true,
          raw: 'line_numbers = :true\n'
        }
      },
      dist: {
        options: {
          environment: 'production',
          outputStyle: 'compact',
          force: true
        }
      }
    },

    // Javascript linting with jshint
    jshint: {
      options: {
        jshintrc: '.jshintrc'
      },
      all: [
        'js/src/*.js',
        '!js/src/*.min.js'
      ]
    },

    // Concat & minify
    uglify: {
      dev: {
        options: {
          mangle: false,
          compress: false,
          preserveComments: 'all',
          beautify: true
        },
        files: {
          'js/dcamp_demo.js': [
            'js/src/*.js',
            '!js/src/*.min.js'
          ]
        }
      },
      dist: {
        options: {
          mangle: true,
          compress: true
        },
        files: {
          'js/script.js': [
            'js/src/*.js',
            '!js/src/*.min.js'
          ]
        }
      }
    },

    //BrowserSync settings

    browserSync: {
      dev: {
        bsFiles: {
          src: 'css/style.css'
        },
        options: {
          watchTask: true,
          proxy: 'cross-local'

        }
      }
    },

    //Drush clear cache for css y js

    drush: {
      cc_theme_registry: {
        args: ['cc', 'css-js']
      },
      css_css_js: {
        args: ['cc', 'css-js']
      }
    }

  });


  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-browser-sync');
  grunt.loadNpmTasks('grunt-drush');

  grunt.registerTask('build', [
    'jshint',
    'uglify:dist',
    'compass:dist'
  ]);

  grunt.registerTask('default', [
    'jshint',
    'uglify:dev',
    'compass:dev',
    'drush',
    'browserSync',
    'watch'

  ]);

};
