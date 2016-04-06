/*! Modernizr 3.2.0 (Custom Build) | MIT *
 * http://modernizr.com/download/?-details-inputtypes-svg-addtest-prefixes-setclasses-teststyles !*/
!function(e,t,n){function i(e,t){return typeof e===t}function o(){var e,t,n,o,s,a,r;for(var l in u)if(u.hasOwnProperty(l)){if(e=[],t=u[l],t.name&&(e.push(t.name.toLowerCase()),t.options&&t.options.aliases&&t.options.aliases.length))for(n=0;n<t.options.aliases.length;n++)e.push(t.options.aliases[n].toLowerCase());for(o=i(t.fn,"function")?t.fn():t.fn,s=0;s<e.length;s++)a=e[s],r=a.split("."),1===r.length?Modernizr[r[0]]=o:(!Modernizr[r[0]]||Modernizr[r[0]]instanceof Boolean||(Modernizr[r[0]]=new Boolean(Modernizr[r[0]])),Modernizr[r[0]][r[1]]=o),d.push((o?"":"no-")+r.join("-"))}}function s(e){var t=m.className,n=Modernizr._config.classPrefix||"";if(g&&(t=t.baseVal),Modernizr._config.enableJSClass){var i=new RegExp("(^|\\s)"+n+"no-js(\\s|$)");t=t.replace(i,"$1"+n+"js$2")}Modernizr._config.enableClasses&&(t+=" "+n+e.join(" "+n),g?m.className.baseVal=t:m.className=t)}function a(e,t){if("object"==typeof e)for(var n in e)h(e,n)&&a(n,e[n]);else{e=e.toLowerCase();var i=e.split("."),o=Modernizr[i[0]];if(2==i.length&&(o=o[i[1]]),"undefined"!=typeof o)return Modernizr;t="function"==typeof t?t():t,1==i.length?Modernizr[i[0]]=t:(!Modernizr[i[0]]||Modernizr[i[0]]instanceof Boolean||(Modernizr[i[0]]=new Boolean(Modernizr[i[0]])),Modernizr[i[0]][i[1]]=t),s([(t&&0!=t?"":"no-")+i.join("-")]),Modernizr._trigger(e,t)}return Modernizr}function r(){return"function"!=typeof t.createElement?t.createElement(arguments[0]):g?t.createElementNS.call(t,"http://www.w3.org/2000/svg",arguments[0]):t.createElement.apply(t,arguments)}function l(){var e=t.body;return e||(e=r(g?"svg":"body"),e.fake=!0),e}function f(e,n,i,o){var s,a,f,d,u="modernizr",c=r("div"),p=l();if(parseInt(i,10))for(;i--;)f=r("div"),f.id=o?o[i]:u+(i+1),c.appendChild(f);return s=r("style"),s.type="text/css",s.id="s"+u,(p.fake?p:c).appendChild(s),p.appendChild(c),s.styleSheet?s.styleSheet.cssText=e:s.appendChild(t.createTextNode(e)),c.id=u,p.fake&&(p.style.background="",p.style.overflow="hidden",d=m.style.overflow,m.style.overflow="hidden",m.appendChild(p)),a=n(c,e),p.fake?(p.parentNode.removeChild(p),m.style.overflow=d,m.offsetHeight):c.parentNode.removeChild(c),!!a}var d=[],u=[],c={_version:"3.2.0",_config:{classPrefix:"",enableClasses:!0,enableJSClass:!0,usePrefixes:!0},_q:[],on:function(e,t){var n=this;setTimeout(function(){t(n[e])},0)},addTest:function(e,t,n){u.push({name:e,fn:t,options:n})},addAsyncTest:function(e){u.push({name:null,fn:e})}},Modernizr=function(){};Modernizr.prototype=c,Modernizr=new Modernizr,Modernizr.addTest("svg",!!t.createElementNS&&!!t.createElementNS("http://www.w3.org/2000/svg","svg").createSVGRect);var p=c._config.usePrefixes?" -webkit- -moz- -o- -ms- ".split(" "):[];c._prefixes=p;var h,m=t.documentElement,g="svg"===m.nodeName.toLowerCase();!function(){var e={}.hasOwnProperty;h=i(e,"undefined")||i(e.call,"undefined")?function(e,t){return t in e&&i(e.constructor.prototype[t],"undefined")}:function(t,n){return e.call(t,n)}}(),c._l={},c.on=function(e,t){this._l[e]||(this._l[e]=[]),this._l[e].push(t),Modernizr.hasOwnProperty(e)&&setTimeout(function(){Modernizr._trigger(e,Modernizr[e])},0)},c._trigger=function(e,t){if(this._l[e]){var n=this._l[e];setTimeout(function(){var e,i;for(e=0;e<n.length;e++)(i=n[e])(t)},0),delete this._l[e]}},Modernizr._q.push(function(){c.addTest=a});var v=r("input"),y="search tel url email datetime date month week time datetime-local number range color".split(" "),w={};Modernizr.inputtypes=function(e){for(var i,o,s,a=e.length,r="1)",l=0;a>l;l++)v.setAttribute("type",i=e[l]),s="text"!==v.type&&"style"in v,s&&(v.value=r,v.style.cssText="position:absolute;visibility:hidden;",/^range$/.test(i)&&v.style.WebkitAppearance!==n?(m.appendChild(v),o=t.defaultView,s=o.getComputedStyle&&"textfield"!==o.getComputedStyle(v,null).WebkitAppearance&&0!==v.offsetHeight,m.removeChild(v)):/^(search|tel)$/.test(i)||(s=/^(url|email)$/.test(i)?v.checkValidity&&v.checkValidity()===!1:v.value!=r)),w[e[l]]=!!s;return w}(y);var _=c.testStyles=f;Modernizr.addTest("details",function(){var e,t=r("details");return"open"in t?(_("#modernizr details{display:block}",function(n){n.appendChild(t),t.innerHTML="<summary>a</summary>b",e=t.offsetHeight,t.open=!0,e=e!=t.offsetHeight}),e):!1}),o(),s(d),delete c.addTest,delete c.addAsyncTest;for(var C=0;C<Modernizr._q.length;C++)Modernizr._q[C]();e.Modernizr=Modernizr}(window,document);
