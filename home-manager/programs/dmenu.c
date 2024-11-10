<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    
<title>~kota/dmenu (master): dmenu.c - sourcehut git</title>

    
    <link rel="icon" type="image/svg+xml" href="/static/logo.svg" />
    <link rel="icon" type="image/png" href="/static/logo.png" sizes="any" />
    
    
    <link rel="stylesheet" href="/static/main.min.d91d8272.css">
    
    
    
    

<style>
pre {
  tab-size: 8
}
</style>



<meta name="vcs" content="git">



<meta name="vcs:clone" content="https://git.sr.ht/~kota/dmenu">

<meta name="vcs:clone" content="git@git.sr.ht:~kota/dmenu">



<meta name="forge:summary" content="https://git.sr.ht/~kota/dmenu">
<meta name="forge:dir" content="https://git.sr.ht/~kota/dmenu/tree/{ref}/{path}">
<meta name="forge:file" content="https://git.sr.ht/~kota/dmenu/tree/{ref}/{path}">
<meta name="forge:rawfile" content="https://git.sr.ht/~kota/dmenu/blob/{ref}/{path}">
<meta name="forge:line" content="https://git.sr.ht/~kota/dmenu/tree/{ref}/{path}#L{line}">

<meta name="go-import" content="git.sr.ht/~kota/dmenu git https://git.sr.ht/~kota/dmenu">

  </head>
  <body>
    
    
    
    
<nav class="navbar navbar-light navbar-expand-sm">
  
<span class="navbar-brand">
  <span class="icon icon-circle " aria-hidden="true"><svg width="22" height="22" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512"><path d="M256 8C119 8 8 119 8 256s111 248 248 248 248-111 248-248S393 8 256 8zm0 448c-110.5 0-200-89.5-200-200S145.5 56 256 56s200 89.5 200 200-89.5 200-200 200z"/></svg>
</span>
  <a href="https://sr.ht">
    sourcehut
  </a>
</span>

<ul class="navbar-nav">
  
</ul>
<div class="login">
  
  <span class="navbar-text">
    
    <a href="https://meta.sr.ht/oauth/authorize?client_id=25ff6e5ce60d7345&amp;scopes=profile,keys,b99a95de3e69c958/jobs:write&amp;state=%2F~kota%2Fdmenu%2Ftree%2Fmaster%2Fitem%2Fdmenu.c%3F" rel="nofollow">Log in</a>
    &mdash;
    <a href="https://meta.sr.ht">Register</a>
    
  </span>
  
</div>
</nav>

    
<div class="header-tabbed">
  
  <div class="container-fluid">
  
    
    
    <h2>
      <a href="/~kota/"
      >~kota</a>/<wbr>dmenu
    </h2>
    <ul class="nav nav-tabs">
      
      <li class="nav-item">
        
    <a
      class="nav-link "
      href="/~kota/dmenu">summary</a>
    
      </li>
      <li class="nav-item">
        
    <a
      class="nav-link active"
      href="/~kota/dmenu/tree">tree</a>
    
      </li>
      <li class="nav-item">
        
    <a
      class="nav-link "
      href="/~kota/dmenu/log">log</a>
    
      </li>
      <li class="nav-item">
        
    <a
      class="nav-link "
      href="/~kota/dmenu/refs">refs</a>
    
      </li>
      
      
      
    </ul>
  </div>

</div>

<div class="header-extension mb-0">
  <div class="blob container-fluid">
    <span>
      


<a href="/~kota/dmenu/tree/master"
>dmenu</a>/dmenu.c



  
  
  <span class="text-muted ml-3">
    <span title="100644">
      -rw-r--r--
    </span>
  </span>

  
    <span class="text-muted ml-3">
      <span title="22911 bytes">
        22.4 KiB
      </span>
    </span>
  



<div class="blob-nav ml-3">
  <ul class="nav nav-tabs">
    <li class="nav-item">
      <a class="nav-link active"
         href="/~kota/dmenu/tree/master/item/dmenu.c">View</a>
    </li>

    <li class="nav-item">
      <a class="nav-link "
         href="/~kota/dmenu/log/master/item/dmenu.c">Log</a>
    </li>

    
      
        <li class="nav-item">
          <a class="nav-link "
             href="/~kota/dmenu/blame/master/dmenu.c">Blame</a>
        </li>
      

      <li class="nav-item">
        <a class="nav-link" rel="noopener noreferrer nofollow"
           href="/~kota/dmenu/blob/master/dmenu.c">View raw</a>
      </li>
    
    <li class="nav-item">
      <a class="nav-link"href="/~kota/dmenu/tree/1fa2afd77b010c27e72fc691ffd5ec614265a926/item/dmenu.c">Permalink</a>
    </li>
  </ul>
</div>

    </span>
    
    <div class="commit">
      <a
        href="/~kota/dmenu/commit/master"
      >1fa2afd7</a> &mdash;
      
      
      <a href="/~kota/">Dakota Walsh</a>
      
      add myself to license
      <span class="text-muted">
        <span title="2022-07-28 20:33:43 UTC">2 years ago</span>
      </span>
    </div>
    <div class="clearfix"></div>
    
  </div>
</div>


<div class="container-fluid code-viewport">

  
  <div class="row mr-0">
    
    
    <div class="col-md-12 code-view">
      
      <pre class="ruler"><span>                                                                                </span></pre>
      
      <pre class="lines"><a href="#L1" id="L1">1
</a><a href="#L2" id="L2">2
</a><a href="#L3" id="L3">3
</a><a href="#L4" id="L4">4
</a><a href="#L5" id="L5">5
</a><a href="#L6" id="L6">6
</a><a href="#L7" id="L7">7
</a><a href="#L8" id="L8">8
</a><a href="#L9" id="L9">9
</a><a href="#L10" id="L10">10
</a><a href="#L11" id="L11">11
</a><a href="#L12" id="L12">12
</a><a href="#L13" id="L13">13
</a><a href="#L14" id="L14">14
</a><a href="#L15" id="L15">15
</a><a href="#L16" id="L16">16
</a><a href="#L17" id="L17">17
</a><a href="#L18" id="L18">18
</a><a href="#L19" id="L19">19
</a><a href="#L20" id="L20">20
</a><a href="#L21" id="L21">21
</a><a href="#L22" id="L22">22
</a><a href="#L23" id="L23">23
</a><a href="#L24" id="L24">24
</a><a href="#L25" id="L25">25
</a><a href="#L26" id="L26">26
</a><a href="#L27" id="L27">27
</a><a href="#L28" id="L28">28
</a><a href="#L29" id="L29">29
</a><a href="#L30" id="L30">30
</a><a href="#L31" id="L31">31
</a><a href="#L32" id="L32">32
</a><a href="#L33" id="L33">33
</a><a href="#L34" id="L34">34
</a><a href="#L35" id="L35">35
</a><a href="#L36" id="L36">36
</a><a href="#L37" id="L37">37
</a><a href="#L38" id="L38">38
</a><a href="#L39" id="L39">39
</a><a href="#L40" id="L40">40
</a><a href="#L41" id="L41">41
</a><a href="#L42" id="L42">42
</a><a href="#L43" id="L43">43
</a><a href="#L44" id="L44">44
</a><a href="#L45" id="L45">45
</a><a href="#L46" id="L46">46
</a><a href="#L47" id="L47">47
</a><a href="#L48" id="L48">48
</a><a href="#L49" id="L49">49
</a><a href="#L50" id="L50">50
</a><a href="#L51" id="L51">51
</a><a href="#L52" id="L52">52
</a><a href="#L53" id="L53">53
</a><a href="#L54" id="L54">54
</a><a href="#L55" id="L55">55
</a><a href="#L56" id="L56">56
</a><a href="#L57" id="L57">57
</a><a href="#L58" id="L58">58
</a><a href="#L59" id="L59">59
</a><a href="#L60" id="L60">60
</a><a href="#L61" id="L61">61
</a><a href="#L62" id="L62">62
</a><a href="#L63" id="L63">63
</a><a href="#L64" id="L64">64
</a><a href="#L65" id="L65">65
</a><a href="#L66" id="L66">66
</a><a href="#L67" id="L67">67
</a><a href="#L68" id="L68">68
</a><a href="#L69" id="L69">69
</a><a href="#L70" id="L70">70
</a><a href="#L71" id="L71">71
</a><a href="#L72" id="L72">72
</a><a href="#L73" id="L73">73
</a><a href="#L74" id="L74">74
</a><a href="#L75" id="L75">75
</a><a href="#L76" id="L76">76
</a><a href="#L77" id="L77">77
</a><a href="#L78" id="L78">78
</a><a href="#L79" id="L79">79
</a><a href="#L80" id="L80">80
</a><a href="#L81" id="L81">81
</a><a href="#L82" id="L82">82
</a><a href="#L83" id="L83">83
</a><a href="#L84" id="L84">84
</a><a href="#L85" id="L85">85
</a><a href="#L86" id="L86">86
</a><a href="#L87" id="L87">87
</a><a href="#L88" id="L88">88
</a><a href="#L89" id="L89">89
</a><a href="#L90" id="L90">90
</a><a href="#L91" id="L91">91
</a><a href="#L92" id="L92">92
</a><a href="#L93" id="L93">93
</a><a href="#L94" id="L94">94
</a><a href="#L95" id="L95">95
</a><a href="#L96" id="L96">96
</a><a href="#L97" id="L97">97
</a><a href="#L98" id="L98">98
</a><a href="#L99" id="L99">99
</a><a href="#L100" id="L100">100
</a><a href="#L101" id="L101">101
</a><a href="#L102" id="L102">102
</a><a href="#L103" id="L103">103
</a><a href="#L104" id="L104">104
</a><a href="#L105" id="L105">105
</a><a href="#L106" id="L106">106
</a><a href="#L107" id="L107">107
</a><a href="#L108" id="L108">108
</a><a href="#L109" id="L109">109
</a><a href="#L110" id="L110">110
</a><a href="#L111" id="L111">111
</a><a href="#L112" id="L112">112
</a><a href="#L113" id="L113">113
</a><a href="#L114" id="L114">114
</a><a href="#L115" id="L115">115
</a><a href="#L116" id="L116">116
</a><a href="#L117" id="L117">117
</a><a href="#L118" id="L118">118
</a><a href="#L119" id="L119">119
</a><a href="#L120" id="L120">120
</a><a href="#L121" id="L121">121
</a><a href="#L122" id="L122">122
</a><a href="#L123" id="L123">123
</a><a href="#L124" id="L124">124
</a><a href="#L125" id="L125">125
</a><a href="#L126" id="L126">126
</a><a href="#L127" id="L127">127
</a><a href="#L128" id="L128">128
</a><a href="#L129" id="L129">129
</a><a href="#L130" id="L130">130
</a><a href="#L131" id="L131">131
</a><a href="#L132" id="L132">132
</a><a href="#L133" id="L133">133
</a><a href="#L134" id="L134">134
</a><a href="#L135" id="L135">135
</a><a href="#L136" id="L136">136
</a><a href="#L137" id="L137">137
</a><a href="#L138" id="L138">138
</a><a href="#L139" id="L139">139
</a><a href="#L140" id="L140">140
</a><a href="#L141" id="L141">141
</a><a href="#L142" id="L142">142
</a><a href="#L143" id="L143">143
</a><a href="#L144" id="L144">144
</a><a href="#L145" id="L145">145
</a><a href="#L146" id="L146">146
</a><a href="#L147" id="L147">147
</a><a href="#L148" id="L148">148
</a><a href="#L149" id="L149">149
</a><a href="#L150" id="L150">150
</a><a href="#L151" id="L151">151
</a><a href="#L152" id="L152">152
</a><a href="#L153" id="L153">153
</a><a href="#L154" id="L154">154
</a><a href="#L155" id="L155">155
</a><a href="#L156" id="L156">156
</a><a href="#L157" id="L157">157
</a><a href="#L158" id="L158">158
</a><a href="#L159" id="L159">159
</a><a href="#L160" id="L160">160
</a><a href="#L161" id="L161">161
</a><a href="#L162" id="L162">162
</a><a href="#L163" id="L163">163
</a><a href="#L164" id="L164">164
</a><a href="#L165" id="L165">165
</a><a href="#L166" id="L166">166
</a><a href="#L167" id="L167">167
</a><a href="#L168" id="L168">168
</a><a href="#L169" id="L169">169
</a><a href="#L170" id="L170">170
</a><a href="#L171" id="L171">171
</a><a href="#L172" id="L172">172
</a><a href="#L173" id="L173">173
</a><a href="#L174" id="L174">174
</a><a href="#L175" id="L175">175
</a><a href="#L176" id="L176">176
</a><a href="#L177" id="L177">177
</a><a href="#L178" id="L178">178
</a><a href="#L179" id="L179">179
</a><a href="#L180" id="L180">180
</a><a href="#L181" id="L181">181
</a><a href="#L182" id="L182">182
</a><a href="#L183" id="L183">183
</a><a href="#L184" id="L184">184
</a><a href="#L185" id="L185">185
</a><a href="#L186" id="L186">186
</a><a href="#L187" id="L187">187
</a><a href="#L188" id="L188">188
</a><a href="#L189" id="L189">189
</a><a href="#L190" id="L190">190
</a><a href="#L191" id="L191">191
</a><a href="#L192" id="L192">192
</a><a href="#L193" id="L193">193
</a><a href="#L194" id="L194">194
</a><a href="#L195" id="L195">195
</a><a href="#L196" id="L196">196
</a><a href="#L197" id="L197">197
</a><a href="#L198" id="L198">198
</a><a href="#L199" id="L199">199
</a><a href="#L200" id="L200">200
</a><a href="#L201" id="L201">201
</a><a href="#L202" id="L202">202
</a><a href="#L203" id="L203">203
</a><a href="#L204" id="L204">204
</a><a href="#L205" id="L205">205
</a><a href="#L206" id="L206">206
</a><a href="#L207" id="L207">207
</a><a href="#L208" id="L208">208
</a><a href="#L209" id="L209">209
</a><a href="#L210" id="L210">210
</a><a href="#L211" id="L211">211
</a><a href="#L212" id="L212">212
</a><a href="#L213" id="L213">213
</a><a href="#L214" id="L214">214
</a><a href="#L215" id="L215">215
</a><a href="#L216" id="L216">216
</a><a href="#L217" id="L217">217
</a><a href="#L218" id="L218">218
</a><a href="#L219" id="L219">219
</a><a href="#L220" id="L220">220
</a><a href="#L221" id="L221">221
</a><a href="#L222" id="L222">222
</a><a href="#L223" id="L223">223
</a><a href="#L224" id="L224">224
</a><a href="#L225" id="L225">225
</a><a href="#L226" id="L226">226
</a><a href="#L227" id="L227">227
</a><a href="#L228" id="L228">228
</a><a href="#L229" id="L229">229
</a><a href="#L230" id="L230">230
</a><a href="#L231" id="L231">231
</a><a href="#L232" id="L232">232
</a><a href="#L233" id="L233">233
</a><a href="#L234" id="L234">234
</a><a href="#L235" id="L235">235
</a><a href="#L236" id="L236">236
</a><a href="#L237" id="L237">237
</a><a href="#L238" id="L238">238
</a><a href="#L239" id="L239">239
</a><a href="#L240" id="L240">240
</a><a href="#L241" id="L241">241
</a><a href="#L242" id="L242">242
</a><a href="#L243" id="L243">243
</a><a href="#L244" id="L244">244
</a><a href="#L245" id="L245">245
</a><a href="#L246" id="L246">246
</a><a href="#L247" id="L247">247
</a><a href="#L248" id="L248">248
</a><a href="#L249" id="L249">249
</a><a href="#L250" id="L250">250
</a><a href="#L251" id="L251">251
</a><a href="#L252" id="L252">252
</a><a href="#L253" id="L253">253
</a><a href="#L254" id="L254">254
</a><a href="#L255" id="L255">255
</a><a href="#L256" id="L256">256
</a><a href="#L257" id="L257">257
</a><a href="#L258" id="L258">258
</a><a href="#L259" id="L259">259
</a><a href="#L260" id="L260">260
</a><a href="#L261" id="L261">261
</a><a href="#L262" id="L262">262
</a><a href="#L263" id="L263">263
</a><a href="#L264" id="L264">264
</a><a href="#L265" id="L265">265
</a><a href="#L266" id="L266">266
</a><a href="#L267" id="L267">267
</a><a href="#L268" id="L268">268
</a><a href="#L269" id="L269">269
</a><a href="#L270" id="L270">270
</a><a href="#L271" id="L271">271
</a><a href="#L272" id="L272">272
</a><a href="#L273" id="L273">273
</a><a href="#L274" id="L274">274
</a><a href="#L275" id="L275">275
</a><a href="#L276" id="L276">276
</a><a href="#L277" id="L277">277
</a><a href="#L278" id="L278">278
</a><a href="#L279" id="L279">279
</a><a href="#L280" id="L280">280
</a><a href="#L281" id="L281">281
</a><a href="#L282" id="L282">282
</a><a href="#L283" id="L283">283
</a><a href="#L284" id="L284">284
</a><a href="#L285" id="L285">285
</a><a href="#L286" id="L286">286
</a><a href="#L287" id="L287">287
</a><a href="#L288" id="L288">288
</a><a href="#L289" id="L289">289
</a><a href="#L290" id="L290">290
</a><a href="#L291" id="L291">291
</a><a href="#L292" id="L292">292
</a><a href="#L293" id="L293">293
</a><a href="#L294" id="L294">294
</a><a href="#L295" id="L295">295
</a><a href="#L296" id="L296">296
</a><a href="#L297" id="L297">297
</a><a href="#L298" id="L298">298
</a><a href="#L299" id="L299">299
</a><a href="#L300" id="L300">300
</a><a href="#L301" id="L301">301
</a><a href="#L302" id="L302">302
</a><a href="#L303" id="L303">303
</a><a href="#L304" id="L304">304
</a><a href="#L305" id="L305">305
</a><a href="#L306" id="L306">306
</a><a href="#L307" id="L307">307
</a><a href="#L308" id="L308">308
</a><a href="#L309" id="L309">309
</a><a href="#L310" id="L310">310
</a><a href="#L311" id="L311">311
</a><a href="#L312" id="L312">312
</a><a href="#L313" id="L313">313
</a><a href="#L314" id="L314">314
</a><a href="#L315" id="L315">315
</a><a href="#L316" id="L316">316
</a><a href="#L317" id="L317">317
</a><a href="#L318" id="L318">318
</a><a href="#L319" id="L319">319
</a><a href="#L320" id="L320">320
</a><a href="#L321" id="L321">321
</a><a href="#L322" id="L322">322
</a><a href="#L323" id="L323">323
</a><a href="#L324" id="L324">324
</a><a href="#L325" id="L325">325
</a><a href="#L326" id="L326">326
</a><a href="#L327" id="L327">327
</a><a href="#L328" id="L328">328
</a><a href="#L329" id="L329">329
</a><a href="#L330" id="L330">330
</a><a href="#L331" id="L331">331
</a><a href="#L332" id="L332">332
</a><a href="#L333" id="L333">333
</a><a href="#L334" id="L334">334
</a><a href="#L335" id="L335">335
</a><a href="#L336" id="L336">336
</a><a href="#L337" id="L337">337
</a><a href="#L338" id="L338">338
</a><a href="#L339" id="L339">339
</a><a href="#L340" id="L340">340
</a><a href="#L341" id="L341">341
</a><a href="#L342" id="L342">342
</a><a href="#L343" id="L343">343
</a><a href="#L344" id="L344">344
</a><a href="#L345" id="L345">345
</a><a href="#L346" id="L346">346
</a><a href="#L347" id="L347">347
</a><a href="#L348" id="L348">348
</a><a href="#L349" id="L349">349
</a><a href="#L350" id="L350">350
</a><a href="#L351" id="L351">351
</a><a href="#L352" id="L352">352
</a><a href="#L353" id="L353">353
</a><a href="#L354" id="L354">354
</a><a href="#L355" id="L355">355
</a><a href="#L356" id="L356">356
</a><a href="#L357" id="L357">357
</a><a href="#L358" id="L358">358
</a><a href="#L359" id="L359">359
</a><a href="#L360" id="L360">360
</a><a href="#L361" id="L361">361
</a><a href="#L362" id="L362">362
</a><a href="#L363" id="L363">363
</a><a href="#L364" id="L364">364
</a><a href="#L365" id="L365">365
</a><a href="#L366" id="L366">366
</a><a href="#L367" id="L367">367
</a><a href="#L368" id="L368">368
</a><a href="#L369" id="L369">369
</a><a href="#L370" id="L370">370
</a><a href="#L371" id="L371">371
</a><a href="#L372" id="L372">372
</a><a href="#L373" id="L373">373
</a><a href="#L374" id="L374">374
</a><a href="#L375" id="L375">375
</a><a href="#L376" id="L376">376
</a><a href="#L377" id="L377">377
</a><a href="#L378" id="L378">378
</a><a href="#L379" id="L379">379
</a><a href="#L380" id="L380">380
</a><a href="#L381" id="L381">381
</a><a href="#L382" id="L382">382
</a><a href="#L383" id="L383">383
</a><a href="#L384" id="L384">384
</a><a href="#L385" id="L385">385
</a><a href="#L386" id="L386">386
</a><a href="#L387" id="L387">387
</a><a href="#L388" id="L388">388
</a><a href="#L389" id="L389">389
</a><a href="#L390" id="L390">390
</a><a href="#L391" id="L391">391
</a><a href="#L392" id="L392">392
</a><a href="#L393" id="L393">393
</a><a href="#L394" id="L394">394
</a><a href="#L395" id="L395">395
</a><a href="#L396" id="L396">396
</a><a href="#L397" id="L397">397
</a><a href="#L398" id="L398">398
</a><a href="#L399" id="L399">399
</a><a href="#L400" id="L400">400
</a><a href="#L401" id="L401">401
</a><a href="#L402" id="L402">402
</a><a href="#L403" id="L403">403
</a><a href="#L404" id="L404">404
</a><a href="#L405" id="L405">405
</a><a href="#L406" id="L406">406
</a><a href="#L407" id="L407">407
</a><a href="#L408" id="L408">408
</a><a href="#L409" id="L409">409
</a><a href="#L410" id="L410">410
</a><a href="#L411" id="L411">411
</a><a href="#L412" id="L412">412
</a><a href="#L413" id="L413">413
</a><a href="#L414" id="L414">414
</a><a href="#L415" id="L415">415
</a><a href="#L416" id="L416">416
</a><a href="#L417" id="L417">417
</a><a href="#L418" id="L418">418
</a><a href="#L419" id="L419">419
</a><a href="#L420" id="L420">420
</a><a href="#L421" id="L421">421
</a><a href="#L422" id="L422">422
</a><a href="#L423" id="L423">423
</a><a href="#L424" id="L424">424
</a><a href="#L425" id="L425">425
</a><a href="#L426" id="L426">426
</a><a href="#L427" id="L427">427
</a><a href="#L428" id="L428">428
</a><a href="#L429" id="L429">429
</a><a href="#L430" id="L430">430
</a><a href="#L431" id="L431">431
</a><a href="#L432" id="L432">432
</a><a href="#L433" id="L433">433
</a><a href="#L434" id="L434">434
</a><a href="#L435" id="L435">435
</a><a href="#L436" id="L436">436
</a><a href="#L437" id="L437">437
</a><a href="#L438" id="L438">438
</a><a href="#L439" id="L439">439
</a><a href="#L440" id="L440">440
</a><a href="#L441" id="L441">441
</a><a href="#L442" id="L442">442
</a><a href="#L443" id="L443">443
</a><a href="#L444" id="L444">444
</a><a href="#L445" id="L445">445
</a><a href="#L446" id="L446">446
</a><a href="#L447" id="L447">447
</a><a href="#L448" id="L448">448
</a><a href="#L449" id="L449">449
</a><a href="#L450" id="L450">450
</a><a href="#L451" id="L451">451
</a><a href="#L452" id="L452">452
</a><a href="#L453" id="L453">453
</a><a href="#L454" id="L454">454
</a><a href="#L455" id="L455">455
</a><a href="#L456" id="L456">456
</a><a href="#L457" id="L457">457
</a><a href="#L458" id="L458">458
</a><a href="#L459" id="L459">459
</a><a href="#L460" id="L460">460
</a><a href="#L461" id="L461">461
</a><a href="#L462" id="L462">462
</a><a href="#L463" id="L463">463
</a><a href="#L464" id="L464">464
</a><a href="#L465" id="L465">465
</a><a href="#L466" id="L466">466
</a><a href="#L467" id="L467">467
</a><a href="#L468" id="L468">468
</a><a href="#L469" id="L469">469
</a><a href="#L470" id="L470">470
</a><a href="#L471" id="L471">471
</a><a href="#L472" id="L472">472
</a><a href="#L473" id="L473">473
</a><a href="#L474" id="L474">474
</a><a href="#L475" id="L475">475
</a><a href="#L476" id="L476">476
</a><a href="#L477" id="L477">477
</a><a href="#L478" id="L478">478
</a><a href="#L479" id="L479">479
</a><a href="#L480" id="L480">480
</a><a href="#L481" id="L481">481
</a><a href="#L482" id="L482">482
</a><a href="#L483" id="L483">483
</a><a href="#L484" id="L484">484
</a><a href="#L485" id="L485">485
</a><a href="#L486" id="L486">486
</a><a href="#L487" id="L487">487
</a><a href="#L488" id="L488">488
</a><a href="#L489" id="L489">489
</a><a href="#L490" id="L490">490
</a><a href="#L491" id="L491">491
</a><a href="#L492" id="L492">492
</a><a href="#L493" id="L493">493
</a><a href="#L494" id="L494">494
</a><a href="#L495" id="L495">495
</a><a href="#L496" id="L496">496
</a><a href="#L497" id="L497">497
</a><a href="#L498" id="L498">498
</a><a href="#L499" id="L499">499
</a><a href="#L500" id="L500">500
</a><a href="#L501" id="L501">501
</a><a href="#L502" id="L502">502
</a><a href="#L503" id="L503">503
</a><a href="#L504" id="L504">504
</a><a href="#L505" id="L505">505
</a><a href="#L506" id="L506">506
</a><a href="#L507" id="L507">507
</a><a href="#L508" id="L508">508
</a><a href="#L509" id="L509">509
</a><a href="#L510" id="L510">510
</a><a href="#L511" id="L511">511
</a><a href="#L512" id="L512">512
</a><a href="#L513" id="L513">513
</a><a href="#L514" id="L514">514
</a><a href="#L515" id="L515">515
</a><a href="#L516" id="L516">516
</a><a href="#L517" id="L517">517
</a><a href="#L518" id="L518">518
</a><a href="#L519" id="L519">519
</a><a href="#L520" id="L520">520
</a><a href="#L521" id="L521">521
</a><a href="#L522" id="L522">522
</a><a href="#L523" id="L523">523
</a><a href="#L524" id="L524">524
</a><a href="#L525" id="L525">525
</a><a href="#L526" id="L526">526
</a><a href="#L527" id="L527">527
</a><a href="#L528" id="L528">528
</a><a href="#L529" id="L529">529
</a><a href="#L530" id="L530">530
</a><a href="#L531" id="L531">531
</a><a href="#L532" id="L532">532
</a><a href="#L533" id="L533">533
</a><a href="#L534" id="L534">534
</a><a href="#L535" id="L535">535
</a><a href="#L536" id="L536">536
</a><a href="#L537" id="L537">537
</a><a href="#L538" id="L538">538
</a><a href="#L539" id="L539">539
</a><a href="#L540" id="L540">540
</a><a href="#L541" id="L541">541
</a><a href="#L542" id="L542">542
</a><a href="#L543" id="L543">543
</a><a href="#L544" id="L544">544
</a><a href="#L545" id="L545">545
</a><a href="#L546" id="L546">546
</a><a href="#L547" id="L547">547
</a><a href="#L548" id="L548">548
</a><a href="#L549" id="L549">549
</a><a href="#L550" id="L550">550
</a><a href="#L551" id="L551">551
</a><a href="#L552" id="L552">552
</a><a href="#L553" id="L553">553
</a><a href="#L554" id="L554">554
</a><a href="#L555" id="L555">555
</a><a href="#L556" id="L556">556
</a><a href="#L557" id="L557">557
</a><a href="#L558" id="L558">558
</a><a href="#L559" id="L559">559
</a><a href="#L560" id="L560">560
</a><a href="#L561" id="L561">561
</a><a href="#L562" id="L562">562
</a><a href="#L563" id="L563">563
</a><a href="#L564" id="L564">564
</a><a href="#L565" id="L565">565
</a><a href="#L566" id="L566">566
</a><a href="#L567" id="L567">567
</a><a href="#L568" id="L568">568
</a><a href="#L569" id="L569">569
</a><a href="#L570" id="L570">570
</a><a href="#L571" id="L571">571
</a><a href="#L572" id="L572">572
</a><a href="#L573" id="L573">573
</a><a href="#L574" id="L574">574
</a><a href="#L575" id="L575">575
</a><a href="#L576" id="L576">576
</a><a href="#L577" id="L577">577
</a><a href="#L578" id="L578">578
</a><a href="#L579" id="L579">579
</a><a href="#L580" id="L580">580
</a><a href="#L581" id="L581">581
</a><a href="#L582" id="L582">582
</a><a href="#L583" id="L583">583
</a><a href="#L584" id="L584">584
</a><a href="#L585" id="L585">585
</a><a href="#L586" id="L586">586
</a><a href="#L587" id="L587">587
</a><a href="#L588" id="L588">588
</a><a href="#L589" id="L589">589
</a><a href="#L590" id="L590">590
</a><a href="#L591" id="L591">591
</a><a href="#L592" id="L592">592
</a><a href="#L593" id="L593">593
</a><a href="#L594" id="L594">594
</a><a href="#L595" id="L595">595
</a><a href="#L596" id="L596">596
</a><a href="#L597" id="L597">597
</a><a href="#L598" id="L598">598
</a><a href="#L599" id="L599">599
</a><a href="#L600" id="L600">600
</a><a href="#L601" id="L601">601
</a><a href="#L602" id="L602">602
</a><a href="#L603" id="L603">603
</a><a href="#L604" id="L604">604
</a><a href="#L605" id="L605">605
</a><a href="#L606" id="L606">606
</a><a href="#L607" id="L607">607
</a><a href="#L608" id="L608">608
</a><a href="#L609" id="L609">609
</a><a href="#L610" id="L610">610
</a><a href="#L611" id="L611">611
</a><a href="#L612" id="L612">612
</a><a href="#L613" id="L613">613
</a><a href="#L614" id="L614">614
</a><a href="#L615" id="L615">615
</a><a href="#L616" id="L616">616
</a><a href="#L617" id="L617">617
</a><a href="#L618" id="L618">618
</a><a href="#L619" id="L619">619
</a><a href="#L620" id="L620">620
</a><a href="#L621" id="L621">621
</a><a href="#L622" id="L622">622
</a><a href="#L623" id="L623">623
</a><a href="#L624" id="L624">624
</a><a href="#L625" id="L625">625
</a><a href="#L626" id="L626">626
</a><a href="#L627" id="L627">627
</a><a href="#L628" id="L628">628
</a><a href="#L629" id="L629">629
</a><a href="#L630" id="L630">630
</a><a href="#L631" id="L631">631
</a><a href="#L632" id="L632">632
</a><a href="#L633" id="L633">633
</a><a href="#L634" id="L634">634
</a><a href="#L635" id="L635">635
</a><a href="#L636" id="L636">636
</a><a href="#L637" id="L637">637
</a><a href="#L638" id="L638">638
</a><a href="#L639" id="L639">639
</a><a href="#L640" id="L640">640
</a><a href="#L641" id="L641">641
</a><a href="#L642" id="L642">642
</a><a href="#L643" id="L643">643
</a><a href="#L644" id="L644">644
</a><a href="#L645" id="L645">645
</a><a href="#L646" id="L646">646
</a><a href="#L647" id="L647">647
</a><a href="#L648" id="L648">648
</a><a href="#L649" id="L649">649
</a><a href="#L650" id="L650">650
</a><a href="#L651" id="L651">651
</a><a href="#L652" id="L652">652
</a><a href="#L653" id="L653">653
</a><a href="#L654" id="L654">654
</a><a href="#L655" id="L655">655
</a><a href="#L656" id="L656">656
</a><a href="#L657" id="L657">657
</a><a href="#L658" id="L658">658
</a><a href="#L659" id="L659">659
</a><a href="#L660" id="L660">660
</a><a href="#L661" id="L661">661
</a><a href="#L662" id="L662">662
</a><a href="#L663" id="L663">663
</a><a href="#L664" id="L664">664
</a><a href="#L665" id="L665">665
</a><a href="#L666" id="L666">666
</a><a href="#L667" id="L667">667
</a><a href="#L668" id="L668">668
</a><a href="#L669" id="L669">669
</a><a href="#L670" id="L670">670
</a><a href="#L671" id="L671">671
</a><a href="#L672" id="L672">672
</a><a href="#L673" id="L673">673
</a><a href="#L674" id="L674">674
</a><a href="#L675" id="L675">675
</a><a href="#L676" id="L676">676
</a><a href="#L677" id="L677">677
</a><a href="#L678" id="L678">678
</a><a href="#L679" id="L679">679
</a><a href="#L680" id="L680">680
</a><a href="#L681" id="L681">681
</a><a href="#L682" id="L682">682
</a><a href="#L683" id="L683">683
</a><a href="#L684" id="L684">684
</a><a href="#L685" id="L685">685
</a><a href="#L686" id="L686">686
</a><a href="#L687" id="L687">687
</a><a href="#L688" id="L688">688
</a><a href="#L689" id="L689">689
</a><a href="#L690" id="L690">690
</a><a href="#L691" id="L691">691
</a><a href="#L692" id="L692">692
</a><a href="#L693" id="L693">693
</a><a href="#L694" id="L694">694
</a><a href="#L695" id="L695">695
</a><a href="#L696" id="L696">696
</a><a href="#L697" id="L697">697
</a><a href="#L698" id="L698">698
</a><a href="#L699" id="L699">699
</a><a href="#L700" id="L700">700
</a><a href="#L701" id="L701">701
</a><a href="#L702" id="L702">702
</a><a href="#L703" id="L703">703
</a><a href="#L704" id="L704">704
</a><a href="#L705" id="L705">705
</a><a href="#L706" id="L706">706
</a><a href="#L707" id="L707">707
</a><a href="#L708" id="L708">708
</a><a href="#L709" id="L709">709
</a><a href="#L710" id="L710">710
</a><a href="#L711" id="L711">711
</a><a href="#L712" id="L712">712
</a><a href="#L713" id="L713">713
</a><a href="#L714" id="L714">714
</a><a href="#L715" id="L715">715
</a><a href="#L716" id="L716">716
</a><a href="#L717" id="L717">717
</a><a href="#L718" id="L718">718
</a><a href="#L719" id="L719">719
</a><a href="#L720" id="L720">720
</a><a href="#L721" id="L721">721
</a><a href="#L722" id="L722">722
</a><a href="#L723" id="L723">723
</a><a href="#L724" id="L724">724
</a><a href="#L725" id="L725">725
</a><a href="#L726" id="L726">726
</a><a href="#L727" id="L727">727
</a><a href="#L728" id="L728">728
</a><a href="#L729" id="L729">729
</a><a href="#L730" id="L730">730
</a><a href="#L731" id="L731">731
</a><a href="#L732" id="L732">732
</a><a href="#L733" id="L733">733
</a><a href="#L734" id="L734">734
</a><a href="#L735" id="L735">735
</a><a href="#L736" id="L736">736
</a><a href="#L737" id="L737">737
</a><a href="#L738" id="L738">738
</a><a href="#L739" id="L739">739
</a><a href="#L740" id="L740">740
</a><a href="#L741" id="L741">741
</a><a href="#L742" id="L742">742
</a><a href="#L743" id="L743">743
</a><a href="#L744" id="L744">744
</a><a href="#L745" id="L745">745
</a><a href="#L746" id="L746">746
</a><a href="#L747" id="L747">747
</a><a href="#L748" id="L748">748
</a><a href="#L749" id="L749">749
</a><a href="#L750" id="L750">750
</a><a href="#L751" id="L751">751
</a><a href="#L752" id="L752">752
</a><a href="#L753" id="L753">753
</a><a href="#L754" id="L754">754
</a><a href="#L755" id="L755">755
</a><a href="#L756" id="L756">756
</a><a href="#L757" id="L757">757
</a><a href="#L758" id="L758">758
</a><a href="#L759" id="L759">759
</a><a href="#L760" id="L760">760
</a><a href="#L761" id="L761">761
</a><a href="#L762" id="L762">762
</a><a href="#L763" id="L763">763
</a><a href="#L764" id="L764">764
</a><a href="#L765" id="L765">765
</a><a href="#L766" id="L766">766
</a><a href="#L767" id="L767">767
</a><a href="#L768" id="L768">768
</a><a href="#L769" id="L769">769
</a><a href="#L770" id="L770">770
</a><a href="#L771" id="L771">771
</a><a href="#L772" id="L772">772
</a><a href="#L773" id="L773">773
</a><a href="#L774" id="L774">774
</a><a href="#L775" id="L775">775
</a><a href="#L776" id="L776">776
</a><a href="#L777" id="L777">777
</a><a href="#L778" id="L778">778
</a><a href="#L779" id="L779">779
</a><a href="#L780" id="L780">780
</a><a href="#L781" id="L781">781
</a><a href="#L782" id="L782">782
</a><a href="#L783" id="L783">783
</a><a href="#L784" id="L784">784
</a><a href="#L785" id="L785">785
</a><a href="#L786" id="L786">786
</a><a href="#L787" id="L787">787
</a><a href="#L788" id="L788">788
</a><a href="#L789" id="L789">789
</a><a href="#L790" id="L790">790
</a><a href="#L791" id="L791">791
</a><a href="#L792" id="L792">792
</a><a href="#L793" id="L793">793
</a><a href="#L794" id="L794">794
</a><a href="#L795" id="L795">795
</a><a href="#L796" id="L796">796
</a><a href="#L797" id="L797">797
</a><a href="#L798" id="L798">798
</a><a href="#L799" id="L799">799
</a><a href="#L800" id="L800">800
</a><a href="#L801" id="L801">801
</a><a href="#L802" id="L802">802
</a><a href="#L803" id="L803">803
</a><a href="#L804" id="L804">804
</a><a href="#L805" id="L805">805
</a><a href="#L806" id="L806">806
</a><a href="#L807" id="L807">807
</a><a href="#L808" id="L808">808
</a><a href="#L809" id="L809">809
</a><a href="#L810" id="L810">810
</a><a href="#L811" id="L811">811
</a><a href="#L812" id="L812">812
</a><a href="#L813" id="L813">813
</a><a href="#L814" id="L814">814
</a><a href="#L815" id="L815">815
</a><a href="#L816" id="L816">816
</a><a href="#L817" id="L817">817
</a><a href="#L818" id="L818">818
</a><a href="#L819" id="L819">819
</a><a href="#L820" id="L820">820
</a><a href="#L821" id="L821">821
</a><a href="#L822" id="L822">822
</a><a href="#L823" id="L823">823
</a><a href="#L824" id="L824">824
</a><a href="#L825" id="L825">825
</a><a href="#L826" id="L826">826
</a><a href="#L827" id="L827">827
</a><a href="#L828" id="L828">828
</a><a href="#L829" id="L829">829
</a><a href="#L830" id="L830">830
</a><a href="#L831" id="L831">831
</a><a href="#L832" id="L832">832
</a><a href="#L833" id="L833">833
</a><a href="#L834" id="L834">834
</a><a href="#L835" id="L835">835
</a><a href="#L836" id="L836">836
</a><a href="#L837" id="L837">837
</a><a href="#L838" id="L838">838
</a><a href="#L839" id="L839">839
</a><a href="#L840" id="L840">840
</a><a href="#L841" id="L841">841
</a><a href="#L842" id="L842">842
</a><a href="#L843" id="L843">843
</a><a href="#L844" id="L844">844
</a><a href="#L845" id="L845">845
</a><a href="#L846" id="L846">846
</a><a href="#L847" id="L847">847
</a><a href="#L848" id="L848">848
</a><a href="#L849" id="L849">849
</a><a href="#L850" id="L850">850
</a><a href="#L851" id="L851">851
</a><a href="#L852" id="L852">852
</a><a href="#L853" id="L853">853
</a><a href="#L854" id="L854">854
</a><a href="#L855" id="L855">855
</a><a href="#L856" id="L856">856
</a><a href="#L857" id="L857">857
</a><a href="#L858" id="L858">858
</a><a href="#L859" id="L859">859
</a><a href="#L860" id="L860">860
</a><a href="#L861" id="L861">861
</a><a href="#L862" id="L862">862
</a><a href="#L863" id="L863">863
</a><a href="#L864" id="L864">864
</a><a href="#L865" id="L865">865
</a><a href="#L866" id="L866">866
</a><a href="#L867" id="L867">867
</a><a href="#L868" id="L868">868
</a><a href="#L869" id="L869">869
</a><a href="#L870" id="L870">870
</a><a href="#L871" id="L871">871
</a><a href="#L872" id="L872">872
</a><a href="#L873" id="L873">873
</a><a href="#L874" id="L874">874
</a><a href="#L875" id="L875">875
</a><a href="#L876" id="L876">876
</a><a href="#L877" id="L877">877
</a><a href="#L878" id="L878">878
</a><a href="#L879" id="L879">879
</a><a href="#L880" id="L880">880
</a><a href="#L881" id="L881">881
</a><a href="#L882" id="L882">882
</a><a href="#L883" id="L883">883
</a><a href="#L884" id="L884">884
</a><a href="#L885" id="L885">885
</a><a href="#L886" id="L886">886
</a><a href="#L887" id="L887">887
</a><a href="#L888" id="L888">888
</a><a href="#L889" id="L889">889
</a><a href="#L890" id="L890">890
</a><a href="#L891" id="L891">891
</a><a href="#L892" id="L892">892
</a><a href="#L893" id="L893">893
</a><a href="#L894" id="L894">894
</a><a href="#L895" id="L895">895
</a><a href="#L896" id="L896">896
</a><a href="#L897" id="L897">897
</a><a href="#L898" id="L898">898
</a><a href="#L899" id="L899">899
</a><a href="#L900" id="L900">900
</a><a href="#L901" id="L901">901
</a><a href="#L902" id="L902">902
</a><a href="#L903" id="L903">903
</a><a href="#L904" id="L904">904
</a><a href="#L905" id="L905">905
</a><a href="#L906" id="L906">906
</a><a href="#L907" id="L907">907
</a><a href="#L908" id="L908">908
</a><a href="#L909" id="L909">909
</a><a href="#L910" id="L910">910
</a><a href="#L911" id="L911">911
</a><a href="#L912" id="L912">912
</a><a href="#L913" id="L913">913
</a><a href="#L914" id="L914">914
</a><a href="#L915" id="L915">915
</a><a href="#L916" id="L916">916
</a><a href="#L917" id="L917">917
</a><a href="#L918" id="L918">918
</a><a href="#L919" id="L919">919
</a><a href="#L920" id="L920">920
</a><a href="#L921" id="L921">921
</a><a href="#L922" id="L922">922
</a><a href="#L923" id="L923">923
</a><a href="#L924" id="L924">924
</a><a href="#L925" id="L925">925
</a><a href="#L926" id="L926">926
</a><a href="#L927" id="L927">927
</a><a href="#L928" id="L928">928
</a><a href="#L929" id="L929">929
</a></pre>
      
      <div class="highlight"><pre><span></span><span class="cm">/* See LICENSE file for copyright and license details. */</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;ctype.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;locale.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;math.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;stdio.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;stdlib.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;string.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;strings.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;time.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;unistd.h&gt;</span>

<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;X11/Xlib.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;X11/Xatom.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;X11/Xutil.h&gt;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;X11/Xresource.h&gt;</span>
<span class="cp">#ifdef XINERAMA</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;X11/extensions/Xinerama.h&gt;</span>
<span class="cp">#endif</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&lt;X11/Xft/Xft.h&gt;</span>

<span class="cp">#include</span><span class="w"> </span><span class="cpf">&quot;drw.h&quot;</span>
<span class="cp">#include</span><span class="w"> </span><span class="cpf">&quot;util.h&quot;</span>

<span class="cm">/* macros */</span>
<span class="cp">#define INTERSECT(x,y,w,h,r)  (MAX(0, MIN((x)+(w),(r).x_org+(r).width)  - MAX((x),(r).x_org)) \</span>
<span class="cp">                             * MAX(0, MIN((y)+(h),(r).y_org+(r).height) - MAX((y),(r).y_org)))</span>
<span class="cp">#define LENGTH(X)             (sizeof X / sizeof X[0])</span>
<span class="cp">#define TEXTW(X)              (drw_fontset_getwidth(drw, (X)) + lrpad)</span>

<span class="cm">/* enums */</span>
<span class="k">enum</span><span class="w"> </span><span class="p">{</span><span class="w"> </span><span class="n">SchemeNorm</span><span class="p">,</span><span class="w"> </span><span class="n">SchemeSel</span><span class="p">,</span><span class="w"> </span><span class="n">SchemeOut</span><span class="p">,</span><span class="w"> </span><span class="n">SchemeLast</span><span class="w"> </span><span class="p">};</span><span class="w"> </span><span class="cm">/* color schemes */</span>

<span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="p">{</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">text</span><span class="p">;</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">left</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">right</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">out</span><span class="p">;</span>
<span class="w">	</span><span class="kt">double</span><span class="w"> </span><span class="n">distance</span><span class="p">;</span>
<span class="p">};</span>

<span class="k">static</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="n">text</span><span class="p">[</span><span class="n">BUFSIZ</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="s">&quot;&quot;</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">embed</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">bh</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="p">,</span><span class="w"> </span><span class="n">mh</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="kt">unsigned</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">dmw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="cm">/* make dmenu this wide */</span>
<span class="k">static</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">inputw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">promptw</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">lrpad</span><span class="p">;</span><span class="w"> </span><span class="cm">/* sum of left and right padding */</span>
<span class="k">static</span><span class="w"> </span><span class="kt">size_t</span><span class="w"> </span><span class="n">cursor</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">items</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">matches</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">matchend</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">prev</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">curr</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">next</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">sel</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">mon</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">-1</span><span class="p">,</span><span class="w"> </span><span class="n">screen</span><span class="p">;</span>

<span class="k">static</span><span class="w"> </span><span class="n">Atom</span><span class="w"> </span><span class="n">clip</span><span class="p">,</span><span class="w"> </span><span class="n">utf8</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="n">Display</span><span class="w"> </span><span class="o">*</span><span class="n">dpy</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="n">Window</span><span class="w"> </span><span class="n">root</span><span class="p">,</span><span class="w"> </span><span class="n">parentwin</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="n">XIC</span><span class="w"> </span><span class="n">xic</span><span class="p">;</span>

<span class="k">static</span><span class="w"> </span><span class="n">Drw</span><span class="w"> </span><span class="o">*</span><span class="n">drw</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="n">Clr</span><span class="w"> </span><span class="o">*</span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeLast</span><span class="p">];</span>

<span class="cm">/* Xresources preferences */</span>
<span class="k">enum</span><span class="w"> </span><span class="n">resource_type</span><span class="w"> </span><span class="p">{</span>
<span class="w">	</span><span class="n">STRING</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span>
<span class="w">	</span><span class="n">INTEGER</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">1</span><span class="p">,</span>
<span class="w">	</span><span class="n">FLOAT</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">2</span>
<span class="p">};</span>
<span class="k">typedef</span><span class="w"> </span><span class="k">struct</span><span class="w"> </span><span class="p">{</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">name</span><span class="p">;</span>
<span class="w">	</span><span class="k">enum</span><span class="w"> </span><span class="n">resource_type</span><span class="w"> </span><span class="n">type</span><span class="p">;</span>
<span class="w">	</span><span class="kt">void</span><span class="w"> </span><span class="o">*</span><span class="n">dst</span><span class="p">;</span>
<span class="p">}</span><span class="w"> </span><span class="n">ResourcePref</span><span class="p">;</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span><span class="w"> </span><span class="nf">load_xresources</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span>
<span class="k">static</span><span class="w"> </span><span class="kt">void</span><span class="w"> </span><span class="nf">resource_load</span><span class="p">(</span><span class="n">XrmDatabase</span><span class="w"> </span><span class="n">db</span><span class="p">,</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">name</span><span class="p">,</span><span class="w"> </span><span class="k">enum</span><span class="w"> </span><span class="n">resource_type</span><span class="w"> </span><span class="n">rtype</span><span class="p">,</span><span class="w"> </span><span class="kt">void</span><span class="w"> </span><span class="o">*</span><span class="n">dst</span><span class="p">);</span>

<span class="cp">#include</span><span class="w"> </span><span class="cpf">&quot;config.h&quot;</span>

<span class="k">static</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="p">(</span><span class="o">*</span><span class="n">fstrncmp</span><span class="p">)(</span><span class="k">const</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="p">,</span><span class="w"> </span><span class="k">const</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="p">,</span><span class="w"> </span><span class="kt">size_t</span><span class="p">)</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strncmp</span><span class="p">;</span>
<span class="k">static</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="p">(</span><span class="o">*</span><span class="n">fstrstr</span><span class="p">)(</span><span class="k">const</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="p">,</span><span class="w"> </span><span class="k">const</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="p">)</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strstr</span><span class="p">;</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">appenditem</span><span class="p">(</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">item</span><span class="p">,</span><span class="w"> </span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">**</span><span class="n">list</span><span class="p">,</span><span class="w"> </span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">**</span><span class="n">last</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">*</span><span class="n">last</span><span class="p">)</span>
<span class="w">		</span><span class="p">(</span><span class="o">*</span><span class="n">last</span><span class="p">)</span><span class="o">-&gt;</span><span class="n">right</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">item</span><span class="p">;</span>
<span class="w">	</span><span class="k">else</span>
<span class="w">		</span><span class="o">*</span><span class="n">list</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">item</span><span class="p">;</span>

<span class="w">	</span><span class="n">item</span><span class="o">-&gt;</span><span class="n">left</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="o">*</span><span class="n">last</span><span class="p">;</span>
<span class="w">	</span><span class="n">item</span><span class="o">-&gt;</span><span class="n">right</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">	</span><span class="o">*</span><span class="n">last</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">item</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">calcoffsets</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">i</span><span class="p">,</span><span class="w"> </span><span class="n">n</span><span class="p">;</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">lines</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span>
<span class="w">		</span><span class="n">n</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">lines</span><span class="w"> </span><span class="o">*</span><span class="w"> </span><span class="n">bh</span><span class="p">;</span>
<span class="w">	</span><span class="k">else</span>
<span class="w">		</span><span class="n">n</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">mw</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="p">(</span><span class="n">promptw</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">inputw</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="s">&quot;&lt;&quot;</span><span class="p">)</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="s">&quot;&gt;&quot;</span><span class="p">));</span>
<span class="w">	</span><span class="cm">/* calculate which items will begin the next page and previous page */</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">next</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">curr</span><span class="p">;</span><span class="w"> </span><span class="n">next</span><span class="p">;</span><span class="w"> </span><span class="n">next</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">next</span><span class="o">-&gt;</span><span class="n">right</span><span class="p">)</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">((</span><span class="n">i</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="p">(</span><span class="n">lines</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">bh</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="n">MIN</span><span class="p">(</span><span class="n">TEXTW</span><span class="p">(</span><span class="n">next</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">),</span><span class="w"> </span><span class="n">n</span><span class="p">))</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="n">n</span><span class="p">)</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">prev</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">curr</span><span class="p">;</span><span class="w"> </span><span class="n">prev</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">prev</span><span class="o">-&gt;</span><span class="n">left</span><span class="p">;</span><span class="w"> </span><span class="n">prev</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">prev</span><span class="o">-&gt;</span><span class="n">left</span><span class="p">)</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">((</span><span class="n">i</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="p">(</span><span class="n">lines</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">bh</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="n">MIN</span><span class="p">(</span><span class="n">TEXTW</span><span class="p">(</span><span class="n">prev</span><span class="o">-&gt;</span><span class="n">left</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">),</span><span class="w"> </span><span class="n">n</span><span class="p">))</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="n">n</span><span class="p">)</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">cleanup</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">size_t</span><span class="w"> </span><span class="n">i</span><span class="p">;</span>

<span class="w">	</span><span class="n">XUngrabKey</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">AnyKey</span><span class="p">,</span><span class="w"> </span><span class="n">AnyModifier</span><span class="p">,</span><span class="w"> </span><span class="n">root</span><span class="p">);</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">SchemeLast</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<span class="w">		</span><span class="n">free</span><span class="p">(</span><span class="n">scheme</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span>
<span class="w">	</span><span class="n">drw_free</span><span class="p">(</span><span class="n">drw</span><span class="p">);</span>
<span class="w">	</span><span class="n">XSync</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">False</span><span class="p">);</span>
<span class="w">	</span><span class="n">XCloseDisplay</span><span class="p">(</span><span class="n">dpy</span><span class="p">);</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span>
<span class="nf">cistrstr</span><span class="p">(</span><span class="k">const</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">s</span><span class="p">,</span><span class="w"> </span><span class="k">const</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">sub</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">size_t</span><span class="w"> </span><span class="n">len</span><span class="p">;</span>

<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">len</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">sub</span><span class="p">);</span><span class="w"> </span><span class="o">*</span><span class="n">s</span><span class="p">;</span><span class="w"> </span><span class="n">s</span><span class="o">++</span><span class="p">)</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strncasecmp</span><span class="p">(</span><span class="n">s</span><span class="p">,</span><span class="w"> </span><span class="n">sub</span><span class="p">,</span><span class="w"> </span><span class="n">len</span><span class="p">))</span>
<span class="w">			</span><span class="k">return</span><span class="w"> </span><span class="p">(</span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="p">)</span><span class="n">s</span><span class="p">;</span>
<span class="w">	</span><span class="k">return</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">int</span>
<span class="nf">drawitem</span><span class="p">(</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">item</span><span class="p">,</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">y</span><span class="p">,</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">w</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">item</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">sel</span><span class="p">)</span>
<span class="w">		</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeSel</span><span class="p">]);</span>
<span class="w">	</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">item</span><span class="o">-&gt;</span><span class="n">out</span><span class="p">)</span>
<span class="w">		</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeOut</span><span class="p">]);</span>
<span class="w">	</span><span class="k">else</span>
<span class="w">		</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">]);</span>

<span class="w">	</span><span class="k">return</span><span class="w"> </span><span class="n">drw_text</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="n">y</span><span class="p">,</span><span class="w"> </span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="n">bh</span><span class="p">,</span><span class="w"> </span><span class="n">lrpad</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">,</span><span class="w"> </span><span class="n">item</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">);</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">drawmenu</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">unsigned</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">curpos</span><span class="p">;</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">item</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">x</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">y</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">w</span><span class="p">;</span>

<span class="w">	</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">]);</span>
<span class="w">	</span><span class="n">drw_rect</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="p">,</span><span class="w"> </span><span class="n">mh</span><span class="p">,</span><span class="w"> </span><span class="mi">1</span><span class="p">,</span><span class="w"> </span><span class="mi">1</span><span class="p">);</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">prompt</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">*</span><span class="n">prompt</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeSel</span><span class="p">]);</span>
<span class="w">		</span><span class="n">x</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">drw_text</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">promptw</span><span class="p">,</span><span class="w"> </span><span class="n">bh</span><span class="p">,</span><span class="w"> </span><span class="n">lrpad</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">,</span><span class="w"> </span><span class="n">prompt</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="cm">/* draw input field */</span>
<span class="w">	</span><span class="n">w</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">(</span><span class="n">lines</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">||</span><span class="w"> </span><span class="o">!</span><span class="n">matches</span><span class="p">)</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">mw</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">x</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="n">inputw</span><span class="p">;</span>
<span class="w">	</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">]);</span>
<span class="w">	</span><span class="n">drw_text</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="n">bh</span><span class="p">,</span><span class="w"> </span><span class="n">lrpad</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">,</span><span class="w"> </span><span class="n">text</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">);</span>

<span class="w">	</span><span class="n">curpos</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="n">text</span><span class="p">)</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="o">&amp;</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]);</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">((</span><span class="n">curpos</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="n">lrpad</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="mi">1</span><span class="p">)</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">w</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">]);</span>
<span class="w">		</span><span class="n">drw_rect</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">x</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">curpos</span><span class="p">,</span><span class="w"> </span><span class="mi">2</span><span class="p">,</span><span class="w"> </span><span class="mi">2</span><span class="p">,</span><span class="w"> </span><span class="n">bh</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="mi">4</span><span class="p">,</span><span class="w"> </span><span class="mi">1</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">lines</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="cm">/* draw vertical list */</span>
<span class="w">		</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">item</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">curr</span><span class="p">;</span><span class="w"> </span><span class="n">item</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">next</span><span class="p">;</span><span class="w"> </span><span class="n">item</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">item</span><span class="o">-&gt;</span><span class="n">right</span><span class="p">)</span>
<span class="w">			</span><span class="n">drawitem</span><span class="p">(</span><span class="n">item</span><span class="p">,</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="n">y</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="n">bh</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">x</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span><span class="w"> </span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">matches</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="cm">/* draw horizontal list */</span>
<span class="w">		</span><span class="n">x</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="n">inputw</span><span class="p">;</span>
<span class="w">		</span><span class="n">w</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="s">&quot;&lt;&quot;</span><span class="p">);</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">curr</span><span class="o">-&gt;</span><span class="n">left</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">]);</span>
<span class="w">			</span><span class="n">drw_text</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="n">bh</span><span class="p">,</span><span class="w"> </span><span class="n">lrpad</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">,</span><span class="w"> </span><span class="s">&quot;&lt;&quot;</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">);</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="n">x</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="n">w</span><span class="p">;</span>
<span class="w">		</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">item</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">curr</span><span class="p">;</span><span class="w"> </span><span class="n">item</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">next</span><span class="p">;</span><span class="w"> </span><span class="n">item</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">item</span><span class="o">-&gt;</span><span class="n">right</span><span class="p">)</span>
<span class="w">			</span><span class="n">x</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">drawitem</span><span class="p">(</span><span class="n">item</span><span class="p">,</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">MIN</span><span class="p">(</span><span class="n">TEXTW</span><span class="p">(</span><span class="n">item</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">),</span><span class="w"> </span><span class="n">mw</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">x</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="s">&quot;&gt;&quot;</span><span class="p">)));</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">next</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">w</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="s">&quot;&gt;&quot;</span><span class="p">);</span>
<span class="w">			</span><span class="n">drw_setscheme</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">]);</span>
<span class="w">			</span><span class="n">drw_text</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="n">bh</span><span class="p">,</span><span class="w"> </span><span class="n">lrpad</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">,</span><span class="w"> </span><span class="s">&quot;&gt;&quot;</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">);</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">drw_map</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="p">,</span><span class="w"> </span><span class="n">mh</span><span class="p">);</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">grabfocus</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">timespec</span><span class="w"> </span><span class="n">ts</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">{</span><span class="w"> </span><span class="p">.</span><span class="n">tv_sec</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="p">.</span><span class="n">tv_nsec</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">10000000</span><span class="w">  </span><span class="p">};</span>
<span class="w">	</span><span class="n">Window</span><span class="w"> </span><span class="n">focuswin</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">i</span><span class="p">,</span><span class="w"> </span><span class="n">revertwin</span><span class="p">;</span>

<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="mi">100</span><span class="p">;</span><span class="w"> </span><span class="o">++</span><span class="n">i</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">XGetInputFocus</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">focuswin</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">revertwin</span><span class="p">);</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">focuswin</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">win</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="n">XSetInputFocus</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="n">RevertToParent</span><span class="p">,</span><span class="w"> </span><span class="n">CurrentTime</span><span class="p">);</span>
<span class="w">		</span><span class="n">nanosleep</span><span class="p">(</span><span class="o">&amp;</span><span class="n">ts</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;cannot grab focus&quot;</span><span class="p">);</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">grabkeyboard</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">timespec</span><span class="w"> </span><span class="n">ts</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">{</span><span class="w"> </span><span class="p">.</span><span class="n">tv_sec</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="p">.</span><span class="n">tv_nsec</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">1000000</span><span class="w">  </span><span class="p">};</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">i</span><span class="p">;</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">embed</span><span class="p">)</span>
<span class="w">		</span><span class="k">return</span><span class="p">;</span>
<span class="w">	</span><span class="cm">/* try to grab keyboard, we may have to wait for another process to ungrab */</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="mi">1000</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">XGrabKeyboard</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">DefaultRootWindow</span><span class="p">(</span><span class="n">dpy</span><span class="p">),</span><span class="w"> </span><span class="n">True</span><span class="p">,</span><span class="w"> </span><span class="n">GrabModeAsync</span><span class="p">,</span>
<span class="w">		                  </span><span class="n">GrabModeAsync</span><span class="p">,</span><span class="w"> </span><span class="n">CurrentTime</span><span class="p">)</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">GrabSuccess</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="n">nanosleep</span><span class="p">(</span><span class="o">&amp;</span><span class="n">ts</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;cannot grab keyboard&quot;</span><span class="p">);</span>
<span class="p">}</span>

<span class="kt">int</span>
<span class="nf">compare_distance</span><span class="p">(</span><span class="k">const</span><span class="w"> </span><span class="kt">void</span><span class="w"> </span><span class="o">*</span><span class="n">a</span><span class="p">,</span><span class="w"> </span><span class="k">const</span><span class="w"> </span><span class="kt">void</span><span class="w"> </span><span class="o">*</span><span class="n">b</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">da</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="o">*</span><span class="p">(</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">**</span><span class="p">)</span><span class="w"> </span><span class="n">a</span><span class="p">;</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">db</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="o">*</span><span class="p">(</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">**</span><span class="p">)</span><span class="w"> </span><span class="n">b</span><span class="p">;</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">db</span><span class="p">)</span>
<span class="w">		</span><span class="k">return</span><span class="w"> </span><span class="mi">1</span><span class="p">;</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">da</span><span class="p">)</span>
<span class="w">		</span><span class="k">return</span><span class="w"> </span><span class="mi">-1</span><span class="p">;</span>

<span class="w">	</span><span class="k">return</span><span class="w"> </span><span class="n">da</span><span class="o">-&gt;</span><span class="n">distance</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">db</span><span class="o">-&gt;</span><span class="n">distance</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="n">da</span><span class="o">-&gt;</span><span class="n">distance</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">db</span><span class="o">-&gt;</span><span class="n">distance</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="mi">-1</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="mi">1</span><span class="p">;</span>
<span class="p">}</span>

<span class="kt">void</span>
<span class="nf">fuzzymatch</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="cm">/* bang - we have so much memory */</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">it</span><span class="p">;</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">**</span><span class="n">fuzzymatches</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="n">c</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">number_of_matches</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">i</span><span class="p">,</span><span class="w"> </span><span class="n">pidx</span><span class="p">,</span><span class="w"> </span><span class="n">sidx</span><span class="p">,</span><span class="w"> </span><span class="n">eidx</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">text_len</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">text</span><span class="p">),</span><span class="w"> </span><span class="n">itext_len</span><span class="p">;</span>

<span class="w">	</span><span class="n">matches</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matchend</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>

<span class="w">	</span><span class="cm">/* walk through all items */</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">it</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">items</span><span class="p">;</span><span class="w"> </span><span class="n">it</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">it</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">;</span><span class="w"> </span><span class="n">it</span><span class="o">++</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">text_len</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">itext_len</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">it</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">);</span>
<span class="w">			</span><span class="n">pidx</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="cm">/* pointer */</span>
<span class="w">			</span><span class="n">sidx</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">eidx</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">-1</span><span class="p">;</span><span class="w"> </span><span class="cm">/* start of match, end of match */</span>
<span class="w">			</span><span class="cm">/* walk through item text */</span>
<span class="w">			</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">itext_len</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="p">(</span><span class="n">c</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">it</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">				</span><span class="cm">/* fuzzy match pattern */</span>
<span class="w">				</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">fstrncmp</span><span class="p">(</span><span class="o">&amp;</span><span class="n">text</span><span class="p">[</span><span class="n">pidx</span><span class="p">],</span><span class="w"> </span><span class="o">&amp;</span><span class="n">c</span><span class="p">,</span><span class="w"> </span><span class="mi">1</span><span class="p">))</span><span class="w"> </span><span class="p">{</span>
<span class="w">					</span><span class="k">if</span><span class="p">(</span><span class="n">sidx</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="mi">-1</span><span class="p">)</span>
<span class="w">						</span><span class="n">sidx</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">i</span><span class="p">;</span>
<span class="w">					</span><span class="n">pidx</span><span class="o">++</span><span class="p">;</span>
<span class="w">					</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">pidx</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">text_len</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">						</span><span class="n">eidx</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">i</span><span class="p">;</span>
<span class="w">						</span><span class="k">break</span><span class="p">;</span>
<span class="w">					</span><span class="p">}</span>
<span class="w">				</span><span class="p">}</span>
<span class="w">			</span><span class="p">}</span>
<span class="w">			</span><span class="cm">/* build list of matches */</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">eidx</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="mi">-1</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">				</span><span class="cm">/* compute distance */</span>
<span class="w">				</span><span class="cm">/* add penalty if match starts late (log(sidx+2))</span>
<span class="cm">				 * add penalty for long a match without many matching characters */</span>
<span class="w">				</span><span class="n">it</span><span class="o">-&gt;</span><span class="n">distance</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">log</span><span class="p">(</span><span class="n">sidx</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="mi">2</span><span class="p">)</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="p">(</span><span class="kt">double</span><span class="p">)(</span><span class="n">eidx</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">sidx</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">text_len</span><span class="p">);</span>
<span class="w">				</span><span class="cm">/* fprintf(stderr, &quot;distance %s %f\n&quot;, it-&gt;text, it-&gt;distance); */</span>
<span class="w">				</span><span class="n">appenditem</span><span class="p">(</span><span class="n">it</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">matches</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">matchend</span><span class="p">);</span>
<span class="w">				</span><span class="n">number_of_matches</span><span class="o">++</span><span class="p">;</span>
<span class="w">			</span><span class="p">}</span>
<span class="w">		</span><span class="p">}</span><span class="w"> </span><span class="k">else</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">appenditem</span><span class="p">(</span><span class="n">it</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">matches</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">matchend</span><span class="p">);</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">	</span><span class="p">}</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">number_of_matches</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="cm">/* initialize array with matches */</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">fuzzymatches</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">realloc</span><span class="p">(</span><span class="n">fuzzymatches</span><span class="p">,</span><span class="w"> </span><span class="n">number_of_matches</span><span class="w"> </span><span class="o">*</span><span class="w"> </span><span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="o">*</span><span class="p">))))</span>
<span class="w">			</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;cannot realloc %u bytes:&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">number_of_matches</span><span class="w"> </span><span class="o">*</span><span class="w"> </span><span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="o">*</span><span class="p">));</span>
<span class="w">		</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">it</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matches</span><span class="p">;</span><span class="w"> </span><span class="n">it</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">number_of_matches</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">,</span><span class="w"> </span><span class="n">it</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">it</span><span class="o">-&gt;</span><span class="n">right</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">fuzzymatches</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">it</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="cm">/* sort matches according to distance */</span>
<span class="w">		</span><span class="n">qsort</span><span class="p">(</span><span class="n">fuzzymatches</span><span class="p">,</span><span class="w"> </span><span class="n">number_of_matches</span><span class="p">,</span><span class="w"> </span><span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="o">*</span><span class="p">),</span><span class="w"> </span><span class="n">compare_distance</span><span class="p">);</span>
<span class="w">		</span><span class="cm">/* rebuild list of matches */</span>
<span class="w">		</span><span class="n">matches</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matchend</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">		</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">it</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">fuzzymatches</span><span class="p">[</span><span class="n">i</span><span class="p">];</span><span class="w">  </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">number_of_matches</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">it</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span>\
<span class="w">				</span><span class="n">it</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">,</span><span class="w"> </span><span class="n">it</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">fuzzymatches</span><span class="p">[</span><span class="n">i</span><span class="p">])</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">appenditem</span><span class="p">(</span><span class="n">it</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">matches</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">matchend</span><span class="p">);</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="n">free</span><span class="p">(</span><span class="n">fuzzymatches</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">sel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matches</span><span class="p">;</span>
<span class="w">	</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">match</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">fuzzy</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">fuzzymatch</span><span class="p">();</span>
<span class="w">		</span><span class="k">return</span><span class="p">;</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="k">static</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">**</span><span class="n">tokv</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">	</span><span class="k">static</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">tokn</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>

<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="n">buf</span><span class="p">[</span><span class="k">sizeof</span><span class="w"> </span><span class="n">text</span><span class="p">],</span><span class="w"> </span><span class="o">*</span><span class="n">s</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">i</span><span class="p">,</span><span class="w"> </span><span class="n">tokc</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="w">	</span><span class="kt">size_t</span><span class="w"> </span><span class="n">len</span><span class="p">,</span><span class="w"> </span><span class="n">textsize</span><span class="p">;</span>
<span class="w">	</span><span class="k">struct</span><span class="w"> </span><span class="nc">item</span><span class="w"> </span><span class="o">*</span><span class="n">item</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">lprefix</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">lsubstr</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">prefixend</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">substrend</span><span class="p">;</span>

<span class="w">	</span><span class="n">strcpy</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="n">text</span><span class="p">);</span>
<span class="w">	</span><span class="cm">/* separate input text into tokens to be matched individually */</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">s</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strtok</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="s">&quot; &quot;</span><span class="p">);</span><span class="w"> </span><span class="n">s</span><span class="p">;</span><span class="w"> </span><span class="n">tokv</span><span class="p">[</span><span class="n">tokc</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="mi">1</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">s</span><span class="p">,</span><span class="w"> </span><span class="n">s</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strtok</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="s">&quot; &quot;</span><span class="p">))</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">++</span><span class="n">tokc</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="n">tokn</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">!</span><span class="p">(</span><span class="n">tokv</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">realloc</span><span class="p">(</span><span class="n">tokv</span><span class="p">,</span><span class="w"> </span><span class="o">++</span><span class="n">tokn</span><span class="w"> </span><span class="o">*</span><span class="w"> </span><span class="k">sizeof</span><span class="w"> </span><span class="o">*</span><span class="n">tokv</span><span class="p">)))</span>
<span class="w">			</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;cannot realloc %u bytes:&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">tokn</span><span class="w"> </span><span class="o">*</span><span class="w"> </span><span class="k">sizeof</span><span class="w"> </span><span class="o">*</span><span class="n">tokv</span><span class="p">);</span>
<span class="w">	</span><span class="n">len</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">tokc</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">tokv</span><span class="p">[</span><span class="mi">0</span><span class="p">])</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>

<span class="w">	</span><span class="n">matches</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">lprefix</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">lsubstr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matchend</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">prefixend</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">substrend</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">	</span><span class="n">textsize</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">text</span><span class="p">)</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="mi">1</span><span class="p">;</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">item</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">items</span><span class="p">;</span><span class="w"> </span><span class="n">item</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">item</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">;</span><span class="w"> </span><span class="n">item</span><span class="o">++</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">tokc</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">fstrstr</span><span class="p">(</span><span class="n">item</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">,</span><span class="w"> </span><span class="n">tokv</span><span class="p">[</span><span class="n">i</span><span class="p">]))</span>
<span class="w">				</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">tokc</span><span class="p">)</span><span class="w"> </span><span class="cm">/* not all tokens match */</span>
<span class="w">			</span><span class="k">continue</span><span class="p">;</span>
<span class="w">		</span><span class="cm">/* exact matches go first, then prefixes, then substrings */</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">tokc</span><span class="w"> </span><span class="o">||</span><span class="w"> </span><span class="o">!</span><span class="n">fstrncmp</span><span class="p">(</span><span class="n">text</span><span class="p">,</span><span class="w"> </span><span class="n">item</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">,</span><span class="w"> </span><span class="n">textsize</span><span class="p">))</span>
<span class="w">			</span><span class="n">appenditem</span><span class="p">(</span><span class="n">item</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">matches</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">matchend</span><span class="p">);</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">fstrncmp</span><span class="p">(</span><span class="n">tokv</span><span class="p">[</span><span class="mi">0</span><span class="p">],</span><span class="w"> </span><span class="n">item</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">,</span><span class="w"> </span><span class="n">len</span><span class="p">))</span>
<span class="w">			</span><span class="n">appenditem</span><span class="p">(</span><span class="n">item</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">lprefix</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">prefixend</span><span class="p">);</span>
<span class="w">		</span><span class="k">else</span>
<span class="w">			</span><span class="n">appenditem</span><span class="p">(</span><span class="n">item</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">lsubstr</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">substrend</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">lprefix</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">matches</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">matchend</span><span class="o">-&gt;</span><span class="n">right</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">lprefix</span><span class="p">;</span>
<span class="w">			</span><span class="n">lprefix</span><span class="o">-&gt;</span><span class="n">left</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matchend</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span><span class="w"> </span><span class="k">else</span>
<span class="w">			</span><span class="n">matches</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">lprefix</span><span class="p">;</span>
<span class="w">		</span><span class="n">matchend</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">prefixend</span><span class="p">;</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">lsubstr</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">matches</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">matchend</span><span class="o">-&gt;</span><span class="n">right</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">lsubstr</span><span class="p">;</span>
<span class="w">			</span><span class="n">lsubstr</span><span class="o">-&gt;</span><span class="n">left</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matchend</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span><span class="w"> </span><span class="k">else</span>
<span class="w">			</span><span class="n">matches</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">lsubstr</span><span class="p">;</span>
<span class="w">		</span><span class="n">matchend</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">substrend</span><span class="p">;</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">sel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matches</span><span class="p">;</span>
<span class="w">	</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">insert</span><span class="p">(</span><span class="k">const</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">str</span><span class="p">,</span><span class="w"> </span><span class="kt">ssize_t</span><span class="w"> </span><span class="n">n</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">strlen</span><span class="p">(</span><span class="n">text</span><span class="p">)</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">n</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="k">sizeof</span><span class="w"> </span><span class="n">text</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="mi">1</span><span class="p">)</span>
<span class="w">		</span><span class="k">return</span><span class="p">;</span>
<span class="w">	</span><span class="cm">/* move existing text out of the way, insert new text, and update cursor */</span>
<span class="w">	</span><span class="n">memmove</span><span class="p">(</span><span class="o">&amp;</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">n</span><span class="p">],</span><span class="w"> </span><span class="o">&amp;</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">],</span><span class="w"> </span><span class="k">sizeof</span><span class="w"> </span><span class="n">text</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">cursor</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">MAX</span><span class="p">(</span><span class="n">n</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">));</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">n</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span>
<span class="w">		</span><span class="n">memcpy</span><span class="p">(</span><span class="o">&amp;</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">],</span><span class="w"> </span><span class="n">str</span><span class="p">,</span><span class="w"> </span><span class="n">n</span><span class="p">);</span>
<span class="w">	</span><span class="n">cursor</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="n">n</span><span class="p">;</span>
<span class="w">	</span><span class="n">match</span><span class="p">();</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">size_t</span>
<span class="nf">nextrune</span><span class="p">(</span><span class="kt">int</span><span class="w"> </span><span class="n">inc</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">ssize_t</span><span class="w"> </span><span class="n">n</span><span class="p">;</span>

<span class="w">	</span><span class="cm">/* return location of next utf8 rune in the given direction (+1 or -1) */</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">n</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">cursor</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">inc</span><span class="p">;</span><span class="w"> </span><span class="n">n</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">inc</span><span class="w"> </span><span class="o">&gt;=</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="p">(</span><span class="n">text</span><span class="p">[</span><span class="n">n</span><span class="p">]</span><span class="w"> </span><span class="o">&amp;</span><span class="w"> </span><span class="mh">0xc0</span><span class="p">)</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="mh">0x80</span><span class="p">;</span><span class="w"> </span><span class="n">n</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="n">inc</span><span class="p">)</span>
<span class="w">		</span><span class="p">;</span>
<span class="w">	</span><span class="k">return</span><span class="w"> </span><span class="n">n</span><span class="p">;</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">movewordedge</span><span class="p">(</span><span class="kt">int</span><span class="w"> </span><span class="n">dir</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">dir</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span><span class="w"> </span><span class="p">{</span><span class="w"> </span><span class="cm">/* move cursor to the start of the word*/</span>
<span class="w">		</span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="n">cursor</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">strchr</span><span class="p">(</span><span class="n">worddelimiters</span><span class="p">,</span><span class="w"> </span><span class="n">text</span><span class="p">[</span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">)]))</span>
<span class="w">			</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">);</span>
<span class="w">		</span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="n">cursor</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">!</span><span class="n">strchr</span><span class="p">(</span><span class="n">worddelimiters</span><span class="p">,</span><span class="w"> </span><span class="n">text</span><span class="p">[</span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">)]))</span>
<span class="w">			</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span><span class="w"> </span><span class="k">else</span><span class="w"> </span><span class="p">{</span><span class="w"> </span><span class="cm">/* move cursor to the end of the word */</span>
<span class="w">		</span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">strchr</span><span class="p">(</span><span class="n">worddelimiters</span><span class="p">,</span><span class="w"> </span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]))</span>
<span class="w">			</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="o">+</span><span class="mi">1</span><span class="p">);</span>
<span class="w">		</span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">!</span><span class="n">strchr</span><span class="p">(</span><span class="n">worddelimiters</span><span class="p">,</span><span class="w"> </span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]))</span>
<span class="w">			</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="o">+</span><span class="mi">1</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">keypress</span><span class="p">(</span><span class="n">XKeyEvent</span><span class="w"> </span><span class="o">*</span><span class="n">ev</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="n">buf</span><span class="p">[</span><span class="mi">32</span><span class="p">];</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">len</span><span class="p">;</span>
<span class="w">	</span><span class="n">KeySym</span><span class="w"> </span><span class="n">ksym</span><span class="p">;</span>
<span class="w">	</span><span class="n">Status</span><span class="w"> </span><span class="n">status</span><span class="p">;</span>

<span class="w">	</span><span class="n">len</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XmbLookupString</span><span class="p">(</span><span class="n">xic</span><span class="p">,</span><span class="w"> </span><span class="n">ev</span><span class="p">,</span><span class="w"> </span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="k">sizeof</span><span class="w"> </span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">ksym</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">status</span><span class="p">);</span>
<span class="w">	</span><span class="k">switch</span><span class="w"> </span><span class="p">(</span><span class="n">status</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">	</span><span class="k">default</span><span class="o">:</span><span class="w"> </span><span class="cm">/* XLookupNone, XBufferOverflow */</span>
<span class="w">		</span><span class="k">return</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XLookupChars</span><span class="p">:</span>
<span class="w">		</span><span class="k">goto</span><span class="w"> </span><span class="n">insert</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XLookupKeySym</span><span class="p">:</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XLookupBoth</span><span class="p">:</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="p">}</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">ev</span><span class="o">-&gt;</span><span class="n">state</span><span class="w"> </span><span class="o">&amp;</span><span class="w"> </span><span class="n">ControlMask</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">switch</span><span class="p">(</span><span class="n">ksym</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_a</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Home</span><span class="p">;</span><span class="w">      </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_b</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Left</span><span class="p">;</span><span class="w">      </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_c</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Escape</span><span class="p">;</span><span class="w">    </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_d</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Delete</span><span class="p">;</span><span class="w">    </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_e</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_End</span><span class="p">;</span><span class="w">       </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_f</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Right</span><span class="p">;</span><span class="w">     </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_g</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Escape</span><span class="p">;</span><span class="w">    </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_h</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_BackSpace</span><span class="p">;</span><span class="w"> </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_i</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Tab</span><span class="p">;</span><span class="w">       </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_j</span><span class="p">:</span><span class="w"> </span><span class="cm">/* fallthrough */</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_J</span><span class="p">:</span><span class="w"> </span><span class="cm">/* fallthrough */</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_m</span><span class="p">:</span><span class="w"> </span><span class="cm">/* fallthrough */</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_M</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Return</span><span class="p">;</span><span class="w"> </span><span class="n">ev</span><span class="o">-&gt;</span><span class="n">state</span><span class="w"> </span><span class="o">&amp;=</span><span class="w"> </span><span class="o">~</span><span class="n">ControlMask</span><span class="p">;</span><span class="w"> </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_n</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Down</span><span class="p">;</span><span class="w">      </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_p</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Up</span><span class="p">;</span><span class="w">        </span><span class="k">break</span><span class="p">;</span>

<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_k</span><span class="p">:</span><span class="w"> </span><span class="cm">/* delete right */</span>
<span class="w">			</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="sc">&#39;\0&#39;</span><span class="p">;</span>
<span class="w">			</span><span class="n">match</span><span class="p">();</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_u</span><span class="p">:</span><span class="w"> </span><span class="cm">/* delete left */</span>
<span class="w">			</span><span class="n">insert</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">cursor</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_w</span><span class="p">:</span><span class="w"> </span><span class="cm">/* delete word */</span>
<span class="w">			</span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="n">cursor</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">strchr</span><span class="p">(</span><span class="n">worddelimiters</span><span class="p">,</span><span class="w"> </span><span class="n">text</span><span class="p">[</span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">)]))</span>
<span class="w">				</span><span class="n">insert</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">)</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">cursor</span><span class="p">);</span>
<span class="w">			</span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="n">cursor</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">!</span><span class="n">strchr</span><span class="p">(</span><span class="n">worddelimiters</span><span class="p">,</span><span class="w"> </span><span class="n">text</span><span class="p">[</span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">)]))</span>
<span class="w">				</span><span class="n">insert</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">)</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">cursor</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_y</span><span class="p">:</span><span class="w"> </span><span class="cm">/* paste selection */</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Y</span><span class="p">:</span>
<span class="w">			</span><span class="n">XConvertSelection</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="p">(</span><span class="n">ev</span><span class="o">-&gt;</span><span class="n">state</span><span class="w"> </span><span class="o">&amp;</span><span class="w"> </span><span class="n">ShiftMask</span><span class="p">)</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">clip</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="n">XA_PRIMARY</span><span class="p">,</span>
<span class="w">			                  </span><span class="n">utf8</span><span class="p">,</span><span class="w"> </span><span class="n">utf8</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="n">CurrentTime</span><span class="p">);</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Left</span><span class="p">:</span>
<span class="w">			</span><span class="n">movewordedge</span><span class="p">(</span><span class="mi">-1</span><span class="p">);</span>
<span class="w">			</span><span class="k">goto</span><span class="w"> </span><span class="n">draw</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Right</span><span class="p">:</span>
<span class="w">			</span><span class="n">movewordedge</span><span class="p">(</span><span class="o">+</span><span class="mi">1</span><span class="p">);</span>
<span class="w">			</span><span class="k">goto</span><span class="w"> </span><span class="n">draw</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Return</span><span class="p">:</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_KP_Enter</span><span class="p">:</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_bracketleft</span><span class="p">:</span>
<span class="w">			</span><span class="n">cleanup</span><span class="p">();</span>
<span class="w">			</span><span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
<span class="w">		</span><span class="k">default</span><span class="o">:</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">	</span><span class="p">}</span><span class="w"> </span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">ev</span><span class="o">-&gt;</span><span class="n">state</span><span class="w"> </span><span class="o">&amp;</span><span class="w"> </span><span class="n">Mod1Mask</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">switch</span><span class="p">(</span><span class="n">ksym</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_b</span><span class="p">:</span>
<span class="w">			</span><span class="n">movewordedge</span><span class="p">(</span><span class="mi">-1</span><span class="p">);</span>
<span class="w">			</span><span class="k">goto</span><span class="w"> </span><span class="n">draw</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_f</span><span class="p">:</span>
<span class="w">			</span><span class="n">movewordedge</span><span class="p">(</span><span class="o">+</span><span class="mi">1</span><span class="p">);</span>
<span class="w">			</span><span class="k">goto</span><span class="w"> </span><span class="n">draw</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_g</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Home</span><span class="p">;</span><span class="w">  </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_G</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_End</span><span class="p">;</span><span class="w">   </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_h</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Up</span><span class="p">;</span><span class="w">    </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_j</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Next</span><span class="p">;</span><span class="w">  </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_k</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Prior</span><span class="p">;</span><span class="w"> </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">XK_l</span><span class="p">:</span><span class="w"> </span><span class="n">ksym</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XK_Down</span><span class="p">;</span><span class="w">  </span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">default</span><span class="o">:</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">	</span><span class="p">}</span>

<span class="w">	</span><span class="k">switch</span><span class="p">(</span><span class="n">ksym</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">	</span><span class="k">default</span><span class="o">:</span>
<span class="w">	</span><span class="nl">insert</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">iscntrl</span><span class="p">(</span><span class="o">*</span><span class="n">buf</span><span class="p">))</span>
<span class="w">			</span><span class="n">insert</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="n">len</span><span class="p">);</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Delete</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="sc">&#39;\0&#39;</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="o">+</span><span class="mi">1</span><span class="p">);</span>
<span class="w">		</span><span class="cm">/* fallthrough */</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_BackSpace</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">cursor</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="n">insert</span><span class="p">(</span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">)</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">cursor</span><span class="p">);</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_End</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="sc">&#39;\0&#39;</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">text</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">next</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="cm">/* jump to end of list and position items in reverse */</span>
<span class="w">			</span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matchend</span><span class="p">;</span>
<span class="w">			</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="w">			</span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">prev</span><span class="p">;</span>
<span class="w">			</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="w">			</span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="n">next</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="p">(</span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">curr</span><span class="o">-&gt;</span><span class="n">right</span><span class="p">))</span>
<span class="w">				</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="n">sel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matchend</span><span class="p">;</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Escape</span><span class="p">:</span>
<span class="w">		</span><span class="n">cleanup</span><span class="p">();</span>
<span class="w">		</span><span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Home</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">sel</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">matches</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="n">sel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">matches</span><span class="p">;</span>
<span class="w">		</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Left</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">cursor</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">sel</span><span class="w"> </span><span class="o">||</span><span class="w"> </span><span class="o">!</span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">left</span><span class="w"> </span><span class="o">||</span><span class="w"> </span><span class="n">lines</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="p">))</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="mi">-1</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">lines</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="cm">/* fallthrough */</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Up</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">sel</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">left</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="p">(</span><span class="n">sel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">left</span><span class="p">)</span><span class="o">-&gt;</span><span class="n">right</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">curr</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">prev</span><span class="p">;</span>
<span class="w">			</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Next</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">next</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="n">sel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">next</span><span class="p">;</span>
<span class="w">		</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Prior</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">prev</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="n">sel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">prev</span><span class="p">;</span>
<span class="w">		</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Return</span><span class="p">:</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_KP_Enter</span><span class="p">:</span>
<span class="w">		</span><span class="n">puts</span><span class="p">((</span><span class="n">sel</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">!</span><span class="p">(</span><span class="n">ev</span><span class="o">-&gt;</span><span class="n">state</span><span class="w"> </span><span class="o">&amp;</span><span class="w"> </span><span class="n">ShiftMask</span><span class="p">))</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">text</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="n">text</span><span class="p">);</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">ev</span><span class="o">-&gt;</span><span class="n">state</span><span class="w"> </span><span class="o">&amp;</span><span class="w"> </span><span class="n">ControlMask</span><span class="p">))</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">cleanup</span><span class="p">();</span>
<span class="w">			</span><span class="n">exit</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">sel</span><span class="p">)</span>
<span class="w">			</span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">out</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">1</span><span class="p">;</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Right</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">text</span><span class="p">[</span><span class="n">cursor</span><span class="p">]</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="sc">&#39;\0&#39;</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">nextrune</span><span class="p">(</span><span class="o">+</span><span class="mi">1</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">lines</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="cm">/* fallthrough */</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Down</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">sel</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">right</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="p">(</span><span class="n">sel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">right</span><span class="p">)</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">next</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">curr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">next</span><span class="p">;</span>
<span class="w">			</span><span class="n">calcoffsets</span><span class="p">();</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="k">case</span><span class="w"> </span><span class="no">XK_Tab</span><span class="p">:</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">sel</span><span class="p">)</span>
<span class="w">			</span><span class="k">return</span><span class="p">;</span>
<span class="w">		</span><span class="n">strncpy</span><span class="p">(</span><span class="n">text</span><span class="p">,</span><span class="w"> </span><span class="n">sel</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">,</span><span class="w"> </span><span class="k">sizeof</span><span class="w"> </span><span class="n">text</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="mi">1</span><span class="p">);</span>
<span class="w">		</span><span class="n">text</span><span class="p">[</span><span class="k">sizeof</span><span class="w"> </span><span class="n">text</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="mi">1</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="sc">&#39;\0&#39;</span><span class="p">;</span>
<span class="w">		</span><span class="n">cursor</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">text</span><span class="p">);</span>
<span class="w">		</span><span class="n">match</span><span class="p">();</span>
<span class="w">		</span><span class="k">break</span><span class="p">;</span>
<span class="w">	</span><span class="p">}</span>

<span class="nl">draw</span><span class="p">:</span>
<span class="w">	</span><span class="n">drawmenu</span><span class="p">();</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">paste</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">p</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">q</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">di</span><span class="p">;</span>
<span class="w">	</span><span class="kt">unsigned</span><span class="w"> </span><span class="kt">long</span><span class="w"> </span><span class="n">dl</span><span class="p">;</span>
<span class="w">	</span><span class="n">Atom</span><span class="w"> </span><span class="n">da</span><span class="p">;</span>

<span class="w">	</span><span class="cm">/* we have been given the current selection, now insert it into input */</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">XGetWindowProperty</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="n">utf8</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="p">(</span><span class="k">sizeof</span><span class="w"> </span><span class="n">text</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">4</span><span class="p">)</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="mi">1</span><span class="p">,</span><span class="w"> </span><span class="n">False</span><span class="p">,</span>
<span class="w">	                   </span><span class="n">utf8</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">da</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">di</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">dl</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">dl</span><span class="p">,</span><span class="w"> </span><span class="p">(</span><span class="kt">unsigned</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">**</span><span class="p">)</span><span class="o">&amp;</span><span class="n">p</span><span class="p">)</span>
<span class="w">	    </span><span class="o">==</span><span class="w"> </span><span class="n">Success</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">p</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">insert</span><span class="p">(</span><span class="n">p</span><span class="p">,</span><span class="w"> </span><span class="p">(</span><span class="n">q</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strchr</span><span class="p">(</span><span class="n">p</span><span class="p">,</span><span class="w"> </span><span class="sc">&#39;\n&#39;</span><span class="p">))</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">q</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">p</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="p">(</span><span class="kt">ssize_t</span><span class="p">)</span><span class="n">strlen</span><span class="p">(</span><span class="n">p</span><span class="p">));</span>
<span class="w">		</span><span class="n">XFree</span><span class="p">(</span><span class="n">p</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">drawmenu</span><span class="p">();</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">readstdin</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="n">buf</span><span class="p">[</span><span class="k">sizeof</span><span class="w"> </span><span class="n">text</span><span class="p">],</span><span class="w"> </span><span class="o">*</span><span class="n">p</span><span class="p">;</span>
<span class="w">	</span><span class="kt">size_t</span><span class="w"> </span><span class="n">i</span><span class="p">,</span><span class="w"> </span><span class="n">imax</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">size</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="w">	</span><span class="kt">unsigned</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">tmpmax</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>

<span class="w">	</span><span class="cm">/* read each line from stdin and add it to the item list */</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">fgets</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="k">sizeof</span><span class="w"> </span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="n">stdin</span><span class="p">);</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="mi">1</span><span class="w"> </span><span class="o">&gt;=</span><span class="w"> </span><span class="n">size</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="k">sizeof</span><span class="w"> </span><span class="o">*</span><span class="n">items</span><span class="p">)</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">items</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">realloc</span><span class="p">(</span><span class="n">items</span><span class="p">,</span><span class="w"> </span><span class="p">(</span><span class="n">size</span><span class="w"> </span><span class="o">+=</span><span class="w"> </span><span class="n">BUFSIZ</span><span class="p">))))</span>
<span class="w">				</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;cannot realloc %u bytes:&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">size</span><span class="p">);</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">((</span><span class="n">p</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strchr</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="sc">&#39;\n&#39;</span><span class="p">)))</span>
<span class="w">			</span><span class="o">*</span><span class="n">p</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="sc">&#39;\0&#39;</span><span class="p">;</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">items</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">text</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strdup</span><span class="p">(</span><span class="n">buf</span><span class="p">)))</span>
<span class="w">			</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;cannot strdup %u bytes:&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">buf</span><span class="p">)</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="mi">1</span><span class="p">);</span>
<span class="w">		</span><span class="n">items</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">out</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="w">		</span><span class="n">drw_font_getexts</span><span class="p">(</span><span class="n">drw</span><span class="o">-&gt;</span><span class="n">fonts</span><span class="p">,</span><span class="w"> </span><span class="n">buf</span><span class="p">,</span><span class="w"> </span><span class="n">strlen</span><span class="p">(</span><span class="n">buf</span><span class="p">),</span><span class="w"> </span><span class="o">&amp;</span><span class="n">tmpmax</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">);</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">tmpmax</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="n">inputw</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="n">inputw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">tmpmax</span><span class="p">;</span>
<span class="w">			</span><span class="n">imax</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">i</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">items</span><span class="p">)</span>
<span class="w">		</span><span class="n">items</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">text</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">	</span><span class="n">inputw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">items</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="n">items</span><span class="p">[</span><span class="n">imax</span><span class="p">].</span><span class="n">text</span><span class="p">)</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="w">	</span><span class="n">lines</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">MIN</span><span class="p">(</span><span class="n">lines</span><span class="p">,</span><span class="w"> </span><span class="n">i</span><span class="p">);</span>
<span class="p">}</span>

<span class="kt">void</span>
<span class="nf">resource_load</span><span class="p">(</span><span class="n">XrmDatabase</span><span class="w"> </span><span class="n">db</span><span class="p">,</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">name</span><span class="p">,</span><span class="w"> </span><span class="k">enum</span><span class="w"> </span><span class="n">resource_type</span><span class="w"> </span><span class="n">rtype</span><span class="p">,</span><span class="w"> </span><span class="kt">void</span><span class="w"> </span><span class="o">*</span><span class="n">dst</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">sdst</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="o">*</span><span class="n">idst</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">	</span><span class="kt">float</span><span class="w"> </span><span class="o">*</span><span class="n">fdst</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="nb">NULL</span><span class="p">;</span>
<span class="w">	</span><span class="n">sdst</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">dst</span><span class="p">;</span>
<span class="w">	</span><span class="n">idst</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">dst</span><span class="p">;</span>
<span class="w">	</span><span class="n">fdst</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">dst</span><span class="p">;</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="n">fullname</span><span class="p">[</span><span class="mi">256</span><span class="p">];</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">type</span><span class="p">;</span>
<span class="w">	</span><span class="n">XrmValue</span><span class="w"> </span><span class="n">ret</span><span class="p">;</span>
<span class="w">	</span><span class="n">snprintf</span><span class="p">(</span><span class="n">fullname</span><span class="p">,</span><span class="w"> </span><span class="k">sizeof</span><span class="p">(</span><span class="n">fullname</span><span class="p">),</span><span class="w"> </span><span class="s">&quot;%s.%s&quot;</span><span class="p">,</span><span class="w"> </span><span class="s">&quot;dmenu&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">name</span><span class="p">);</span>
<span class="w">	</span><span class="n">fullname</span><span class="p">[</span><span class="k">sizeof</span><span class="p">(</span><span class="n">fullname</span><span class="p">)</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="mi">1</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="sc">&#39;\0&#39;</span><span class="p">;</span>
<span class="w">	</span><span class="n">XrmGetResource</span><span class="p">(</span><span class="n">db</span><span class="p">,</span><span class="w"> </span><span class="n">fullname</span><span class="p">,</span><span class="w"> </span><span class="s">&quot;*&quot;</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">type</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">ret</span><span class="p">);</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">ret</span><span class="p">.</span><span class="n">addr</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="nb">NULL</span><span class="w"> </span><span class="o">||</span><span class="w"> </span><span class="n">strncmp</span><span class="p">(</span><span class="s">&quot;String&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">type</span><span class="p">,</span><span class="w"> </span><span class="mi">64</span><span class="p">)))</span>
<span class="w">	</span><span class="p">{</span>
<span class="w">		</span><span class="k">switch</span><span class="w"> </span><span class="p">(</span><span class="n">rtype</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">STRING</span><span class="p">:</span>
<span class="w">			</span><span class="n">strcpy</span><span class="p">(</span><span class="n">sdst</span><span class="p">,</span><span class="w"> </span><span class="n">ret</span><span class="p">.</span><span class="n">addr</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">INTEGER</span><span class="p">:</span>
<span class="w">			</span><span class="o">*</span><span class="n">idst</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strtoul</span><span class="p">(</span><span class="n">ret</span><span class="p">.</span><span class="n">addr</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="mi">10</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">FLOAT</span><span class="p">:</span>
<span class="w">			</span><span class="o">*</span><span class="n">fdst</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strtof</span><span class="p">(</span><span class="n">ret</span><span class="p">.</span><span class="n">addr</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">	</span><span class="p">}</span>
<span class="p">}</span>

<span class="kt">void</span>
<span class="nf">load_xresources</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="n">Display</span><span class="w"> </span><span class="o">*</span><span class="n">display</span><span class="p">;</span>
<span class="w">	</span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">resm</span><span class="p">;</span>
<span class="w">	</span><span class="n">XrmDatabase</span><span class="w"> </span><span class="n">db</span><span class="p">;</span>
<span class="w">	</span><span class="n">ResourcePref</span><span class="w"> </span><span class="o">*</span><span class="n">p</span><span class="p">;</span>
<span class="w">	</span><span class="n">display</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XOpenDisplay</span><span class="p">(</span><span class="nb">NULL</span><span class="p">);</span>
<span class="w">	</span><span class="n">resm</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XResourceManagerString</span><span class="p">(</span><span class="n">display</span><span class="p">);</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">resm</span><span class="p">)</span>
<span class="w">		</span><span class="k">return</span><span class="p">;</span>
<span class="w">	</span><span class="n">db</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XrmGetStringDatabase</span><span class="p">(</span><span class="n">resm</span><span class="p">);</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">p</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">resources</span><span class="p">;</span><span class="w"> </span><span class="n">p</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">resources</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="n">LENGTH</span><span class="p">(</span><span class="n">resources</span><span class="p">);</span><span class="w"> </span><span class="n">p</span><span class="o">++</span><span class="p">)</span>
<span class="w">		</span><span class="n">resource_load</span><span class="p">(</span><span class="n">db</span><span class="p">,</span><span class="w"> </span><span class="n">p</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">,</span><span class="w"> </span><span class="n">p</span><span class="o">-&gt;</span><span class="n">type</span><span class="p">,</span><span class="w"> </span><span class="n">p</span><span class="o">-&gt;</span><span class="n">dst</span><span class="p">);</span>
<span class="w">	</span><span class="n">XCloseDisplay</span><span class="p">(</span><span class="n">display</span><span class="p">);</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">run</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="n">XEvent</span><span class="w"> </span><span class="n">ev</span><span class="p">;</span>

<span class="w">	</span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">XNextEvent</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">ev</span><span class="p">))</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">XFilterEvent</span><span class="p">(</span><span class="o">&amp;</span><span class="n">ev</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">))</span>
<span class="w">			</span><span class="k">continue</span><span class="p">;</span>
<span class="w">		</span><span class="k">switch</span><span class="p">(</span><span class="n">ev</span><span class="p">.</span><span class="n">type</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">DestroyNotify</span><span class="p">:</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">ev</span><span class="p">.</span><span class="n">xdestroywindow</span><span class="p">.</span><span class="n">window</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">win</span><span class="p">)</span>
<span class="w">				</span><span class="k">break</span><span class="p">;</span>
<span class="w">			</span><span class="n">cleanup</span><span class="p">();</span>
<span class="w">			</span><span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">Expose</span><span class="p">:</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">ev</span><span class="p">.</span><span class="n">xexpose</span><span class="p">.</span><span class="n">count</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="mi">0</span><span class="p">)</span>
<span class="w">				</span><span class="n">drw_map</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="p">,</span><span class="w"> </span><span class="n">mh</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">FocusIn</span><span class="p">:</span>
<span class="w">			</span><span class="cm">/* regrab focus from parent window */</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">ev</span><span class="p">.</span><span class="n">xfocus</span><span class="p">.</span><span class="n">window</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">win</span><span class="p">)</span>
<span class="w">				</span><span class="n">grabfocus</span><span class="p">();</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">KeyPress</span><span class="p">:</span>
<span class="w">			</span><span class="n">keypress</span><span class="p">(</span><span class="o">&amp;</span><span class="n">ev</span><span class="p">.</span><span class="n">xkey</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">SelectionNotify</span><span class="p">:</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">ev</span><span class="p">.</span><span class="n">xselection</span><span class="p">.</span><span class="n">property</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">utf8</span><span class="p">)</span>
<span class="w">				</span><span class="n">paste</span><span class="p">();</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="k">case</span><span class="w"> </span><span class="no">VisibilityNotify</span><span class="p">:</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">ev</span><span class="p">.</span><span class="n">xvisibility</span><span class="p">.</span><span class="n">state</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">VisibilityUnobscured</span><span class="p">)</span>
<span class="w">				</span><span class="n">XRaiseWindow</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">);</span>
<span class="w">			</span><span class="k">break</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">	</span><span class="p">}</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">setup</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="n">y</span><span class="p">,</span><span class="w"> </span><span class="n">i</span><span class="p">,</span><span class="w"> </span><span class="n">j</span><span class="p">;</span>
<span class="w">	</span><span class="kt">unsigned</span><span class="w"> </span><span class="kt">int</span><span class="w"> </span><span class="n">du</span><span class="p">;</span>
<span class="w">	</span><span class="n">XSetWindowAttributes</span><span class="w"> </span><span class="n">swa</span><span class="p">;</span>
<span class="w">	</span><span class="n">XIM</span><span class="w"> </span><span class="n">xim</span><span class="p">;</span>
<span class="w">	</span><span class="n">Window</span><span class="w"> </span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="n">dw</span><span class="p">,</span><span class="w"> </span><span class="o">*</span><span class="n">dws</span><span class="p">;</span>
<span class="w">	</span><span class="n">XWindowAttributes</span><span class="w"> </span><span class="n">wa</span><span class="p">;</span>
<span class="w">	</span><span class="n">XClassHint</span><span class="w"> </span><span class="n">ch</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">{</span><span class="s">&quot;dmenu&quot;</span><span class="p">,</span><span class="w"> </span><span class="s">&quot;dmenu&quot;</span><span class="p">};</span>
<span class="cp">#ifdef XINERAMA</span>
<span class="w">	</span><span class="n">XineramaScreenInfo</span><span class="w"> </span><span class="o">*</span><span class="n">info</span><span class="p">;</span>
<span class="w">	</span><span class="n">Window</span><span class="w"> </span><span class="n">pw</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">a</span><span class="p">,</span><span class="w"> </span><span class="n">di</span><span class="p">,</span><span class="w"> </span><span class="n">n</span><span class="p">,</span><span class="w"> </span><span class="n">area</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="cp">#endif</span>
<span class="w">	</span><span class="cm">/* init appearance */</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">j</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">j</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">SchemeLast</span><span class="p">;</span><span class="w"> </span><span class="n">j</span><span class="o">++</span><span class="p">)</span>
<span class="w">		</span><span class="n">scheme</span><span class="p">[</span><span class="n">j</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">drw_scm_create</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">colors</span><span class="p">[</span><span class="n">j</span><span class="p">],</span><span class="w"> </span><span class="mi">2</span><span class="p">);</span>

<span class="w">	</span><span class="n">clip</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XInternAtom</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="s">&quot;CLIPBOARD&quot;</span><span class="p">,</span><span class="w">   </span><span class="n">False</span><span class="p">);</span>
<span class="w">	</span><span class="n">utf8</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XInternAtom</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="s">&quot;UTF8_STRING&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">False</span><span class="p">);</span>

<span class="w">	</span><span class="cm">/* calculate menu geometry */</span>
<span class="w">	</span><span class="n">bh</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">drw</span><span class="o">-&gt;</span><span class="n">fonts</span><span class="o">-&gt;</span><span class="n">h</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="mi">2</span><span class="p">;</span>
<span class="w">	</span><span class="n">lines</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">MAX</span><span class="p">(</span><span class="n">lines</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">);</span>
<span class="w">	</span><span class="n">mh</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">(</span><span class="n">lines</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="mi">1</span><span class="p">)</span><span class="w"> </span><span class="o">*</span><span class="w"> </span><span class="n">bh</span><span class="p">;</span>
<span class="cp">#ifdef XINERAMA</span>
<span class="w">	</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">parentwin</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">root</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="p">(</span><span class="n">info</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XineramaQueryScreens</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">n</span><span class="p">)))</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">XGetInputFocus</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">di</span><span class="p">);</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">mon</span><span class="w"> </span><span class="o">&gt;=</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">mon</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">n</span><span class="p">)</span>
<span class="w">			</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">mon</span><span class="p">;</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">w</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">root</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">w</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">PointerRoot</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">w</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">None</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="cm">/* find top-level window containing current input focus */</span>
<span class="w">			</span><span class="k">do</span><span class="w"> </span><span class="p">{</span>
<span class="w">				</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">XQueryTree</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="p">(</span><span class="n">pw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">w</span><span class="p">),</span><span class="w"> </span><span class="o">&amp;</span><span class="n">dw</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">dws</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">du</span><span class="p">)</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">dws</span><span class="p">)</span>
<span class="w">					</span><span class="n">XFree</span><span class="p">(</span><span class="n">dws</span><span class="p">);</span>
<span class="w">			</span><span class="p">}</span><span class="w"> </span><span class="k">while</span><span class="w"> </span><span class="p">(</span><span class="n">w</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">root</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">w</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">pw</span><span class="p">);</span>
<span class="w">			</span><span class="cm">/* find xinerama screen with which the window intersects most */</span>
<span class="w">			</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">XGetWindowAttributes</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">pw</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">wa</span><span class="p">))</span>
<span class="w">				</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">j</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">j</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">n</span><span class="p">;</span><span class="w"> </span><span class="n">j</span><span class="o">++</span><span class="p">)</span>
<span class="w">					</span><span class="k">if</span><span class="w"> </span><span class="p">((</span><span class="n">a</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">INTERSECT</span><span class="p">(</span><span class="n">wa</span><span class="p">.</span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="n">wa</span><span class="p">.</span><span class="n">y</span><span class="p">,</span><span class="w"> </span><span class="n">wa</span><span class="p">.</span><span class="n">width</span><span class="p">,</span><span class="w"> </span><span class="n">wa</span><span class="p">.</span><span class="n">height</span><span class="p">,</span><span class="w"> </span><span class="n">info</span><span class="p">[</span><span class="n">j</span><span class="p">]))</span><span class="w"> </span><span class="o">&gt;</span><span class="w"> </span><span class="n">area</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">						</span><span class="n">area</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">a</span><span class="p">;</span>
<span class="w">						</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">j</span><span class="p">;</span>
<span class="w">					</span><span class="p">}</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="cm">/* no focused window is on screen, so use pointer location instead */</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">mon</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="mi">0</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">!</span><span class="n">area</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">XQueryPointer</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">root</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">dw</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">dw</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">y</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">di</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">di</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">du</span><span class="p">))</span>
<span class="w">			</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">n</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<span class="w">				</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">INTERSECT</span><span class="p">(</span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="n">y</span><span class="p">,</span><span class="w"> </span><span class="mi">1</span><span class="p">,</span><span class="w"> </span><span class="mi">1</span><span class="p">,</span><span class="w"> </span><span class="n">info</span><span class="p">[</span><span class="n">i</span><span class="p">]))</span>
<span class="w">					</span><span class="k">break</span><span class="p">;</span>

<span class="w">		</span><span class="n">mw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">(</span><span class="n">dmw</span><span class="o">&gt;</span><span class="mi">0</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">dmw</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="n">info</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">width</span><span class="p">);</span>
<span class="w">		</span><span class="n">x</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">info</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">x_org</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="p">((</span><span class="n">info</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">width</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">mw</span><span class="p">)</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">);</span>
<span class="w">		</span><span class="n">y</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">info</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">y_org</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="p">((</span><span class="n">info</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">height</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">mh</span><span class="p">)</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">);</span>
<span class="w">		</span><span class="n">XFree</span><span class="p">(</span><span class="n">info</span><span class="p">);</span>
<span class="w">	</span><span class="p">}</span><span class="w"> </span><span class="k">else</span>
<span class="cp">#endif</span>
<span class="w">	</span><span class="p">{</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">XGetWindowAttributes</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">parentwin</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">wa</span><span class="p">))</span>
<span class="w">			</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;could not get embedding window attributes: 0x%lx&quot;</span><span class="p">,</span>
<span class="w">			    </span><span class="n">parentwin</span><span class="p">);</span>
<span class="w">		</span><span class="n">mw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">(</span><span class="n">dmw</span><span class="o">&gt;</span><span class="mi">0</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">dmw</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="n">wa</span><span class="p">.</span><span class="n">width</span><span class="p">);</span>
<span class="w">		</span><span class="n">x</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">(</span><span class="n">wa</span><span class="p">.</span><span class="n">width</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">mw</span><span class="p">)</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">;</span>
<span class="w">		</span><span class="n">y</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">(</span><span class="n">wa</span><span class="p">.</span><span class="n">height</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">mh</span><span class="p">)</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">2</span><span class="p">;</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">promptw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="p">(</span><span class="n">prompt</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">*</span><span class="n">prompt</span><span class="p">)</span><span class="w"> </span><span class="o">?</span><span class="w"> </span><span class="n">TEXTW</span><span class="p">(</span><span class="n">prompt</span><span class="p">)</span><span class="w"> </span><span class="o">-</span><span class="w"> </span><span class="n">lrpad</span><span class="w"> </span><span class="o">/</span><span class="w"> </span><span class="mi">4</span><span class="w"> </span><span class="o">:</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="w">	</span><span class="n">inputw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">MIN</span><span class="p">(</span><span class="n">inputw</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="o">/</span><span class="mi">3</span><span class="p">);</span>
<span class="w">	</span><span class="n">match</span><span class="p">();</span>

<span class="w">	</span><span class="cm">/* create menu window */</span>
<span class="w">	</span><span class="n">swa</span><span class="p">.</span><span class="n">override_redirect</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">True</span><span class="p">;</span>
<span class="w">	</span><span class="n">swa</span><span class="p">.</span><span class="n">background_pixel</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">][</span><span class="n">ColBg</span><span class="p">].</span><span class="n">pixel</span><span class="p">;</span>
<span class="w">	</span><span class="n">swa</span><span class="p">.</span><span class="n">event_mask</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">ExposureMask</span><span class="w"> </span><span class="o">|</span><span class="w"> </span><span class="n">KeyPressMask</span><span class="w"> </span><span class="o">|</span><span class="w"> </span><span class="n">VisibilityChangeMask</span><span class="p">;</span>
<span class="w">	</span><span class="n">win</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XCreateWindow</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">parentwin</span><span class="p">,</span><span class="w"> </span><span class="n">x</span><span class="p">,</span><span class="w"> </span><span class="n">y</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="p">,</span><span class="w"> </span><span class="n">mh</span><span class="p">,</span><span class="w"> </span><span class="n">border_width</span><span class="p">,</span>
<span class="w">	                    </span><span class="n">CopyFromParent</span><span class="p">,</span><span class="w"> </span><span class="n">CopyFromParent</span><span class="p">,</span><span class="w"> </span><span class="n">CopyFromParent</span><span class="p">,</span>
<span class="w">	                    </span><span class="n">CWOverrideRedirect</span><span class="w"> </span><span class="o">|</span><span class="w"> </span><span class="n">CWBackPixel</span><span class="w"> </span><span class="o">|</span><span class="w"> </span><span class="n">CWEventMask</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">swa</span><span class="p">);</span>
<span class="w">	</span><span class="n">XSetWindowBorder</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="n">scheme</span><span class="p">[</span><span class="n">SchemeSel</span><span class="p">][</span><span class="n">ColBg</span><span class="p">].</span><span class="n">pixel</span><span class="p">);</span>
<span class="w">	</span><span class="n">XSetClassHint</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">ch</span><span class="p">);</span>


<span class="w">	</span><span class="cm">/* input methods */</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">((</span><span class="n">xim</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XOpenIM</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">))</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="nb">NULL</span><span class="p">)</span>
<span class="w">		</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;XOpenIM failed: could not open input device&quot;</span><span class="p">);</span>

<span class="w">	</span><span class="n">xic</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XCreateIC</span><span class="p">(</span><span class="n">xim</span><span class="p">,</span><span class="w"> </span><span class="n">XNInputStyle</span><span class="p">,</span><span class="w"> </span><span class="n">XIMPreeditNothing</span><span class="w"> </span><span class="o">|</span><span class="w"> </span><span class="n">XIMStatusNothing</span><span class="p">,</span>
<span class="w">	                </span><span class="n">XNClientWindow</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="n">XNFocusWindow</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">);</span>

<span class="w">	</span><span class="n">XMapRaised</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">win</span><span class="p">);</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">embed</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">XSelectInput</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">parentwin</span><span class="p">,</span><span class="w"> </span><span class="n">FocusChangeMask</span><span class="w"> </span><span class="o">|</span><span class="w"> </span><span class="n">SubstructureNotifyMask</span><span class="p">);</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">XQueryTree</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">parentwin</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">dw</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">w</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">dws</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">du</span><span class="p">)</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">dws</span><span class="p">)</span><span class="w"> </span><span class="p">{</span>
<span class="w">			</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">du</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="n">dws</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="w"> </span><span class="o">!=</span><span class="w"> </span><span class="n">win</span><span class="p">;</span><span class="w"> </span><span class="o">++</span><span class="n">i</span><span class="p">)</span>
<span class="w">				</span><span class="n">XSelectInput</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">dws</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="n">FocusChangeMask</span><span class="p">);</span>
<span class="w">			</span><span class="n">XFree</span><span class="p">(</span><span class="n">dws</span><span class="p">);</span>
<span class="w">		</span><span class="p">}</span>
<span class="w">		</span><span class="n">grabfocus</span><span class="p">();</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">drw_resize</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">mw</span><span class="p">,</span><span class="w"> </span><span class="n">mh</span><span class="p">);</span>
<span class="w">	</span><span class="n">drawmenu</span><span class="p">();</span>
<span class="p">}</span>

<span class="k">static</span><span class="w"> </span><span class="kt">void</span>
<span class="nf">usage</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span>
<span class="p">{</span>
<span class="w">	</span><span class="n">fputs</span><span class="p">(</span><span class="s">&quot;usage: dmenu [-bfiv] [-l lines] [-p prompt] [-fn font] [-m monitor]</span><span class="se">\n</span><span class="s">&quot;</span>
<span class="w">	      </span><span class="s">&quot;[-z width] [-nb color] [-nf color] [-sb color] [-sf color] [-w windowid]</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">stderr</span><span class="p">);</span>
<span class="w">	</span><span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>
<span class="p">}</span>

<span class="kt">int</span>
<span class="nf">main</span><span class="p">(</span><span class="kt">int</span><span class="w"> </span><span class="n">argc</span><span class="p">,</span><span class="w"> </span><span class="kt">char</span><span class="w"> </span><span class="o">*</span><span class="n">argv</span><span class="p">[])</span>
<span class="p">{</span>
<span class="w">	</span><span class="n">XWindowAttributes</span><span class="w"> </span><span class="n">wa</span><span class="p">;</span>
<span class="w">	</span><span class="kt">int</span><span class="w"> </span><span class="n">i</span><span class="p">,</span><span class="w"> </span><span class="n">fast</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>

<span class="w">	</span><span class="n">XrmInitialize</span><span class="p">();</span>
<span class="w">	</span><span class="n">load_xresources</span><span class="p">();</span>
<span class="w">	</span>
<span class="w">	</span><span class="k">for</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">1</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="w"> </span><span class="o">&lt;</span><span class="w"> </span><span class="n">argc</span><span class="p">;</span><span class="w"> </span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
<span class="w">		</span><span class="cm">/* these options take no arguments */</span>
<span class="w">		</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-v&quot;</span><span class="p">))</span><span class="w"> </span><span class="p">{</span><span class="w">      </span><span class="cm">/* prints version information */</span>
<span class="w">			</span><span class="n">puts</span><span class="p">(</span><span class="s">&quot;dmenu-&quot;</span><span class="n">VERSION</span><span class="p">);</span>
<span class="w">			</span><span class="n">exit</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span>
<span class="w">		</span><span class="p">}</span><span class="w"> </span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-f&quot;</span><span class="p">))</span><span class="w">   </span><span class="cm">/* grabs keyboard before reading stdin */</span>
<span class="w">			</span><span class="n">fast</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">1</span><span class="p">;</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-F&quot;</span><span class="p">))</span><span class="w">   </span><span class="cm">/* disable fuzzy matching */</span>
<span class="w">			</span><span class="n">fuzzy</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="mi">0</span><span class="p">;</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-i&quot;</span><span class="p">))</span><span class="w"> </span><span class="p">{</span><span class="w"> </span><span class="cm">/* case-insensitive item matching */</span>
<span class="w">			</span><span class="n">fstrncmp</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strncasecmp</span><span class="p">;</span>
<span class="w">			</span><span class="n">fstrstr</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">cistrstr</span><span class="p">;</span>
<span class="w">		</span><span class="p">}</span><span class="w"> </span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">i</span><span class="w"> </span><span class="o">+</span><span class="w"> </span><span class="mi">1</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="n">argc</span><span class="p">)</span>
<span class="w">			</span><span class="n">usage</span><span class="p">();</span>
<span class="w">		</span><span class="cm">/* these options take one argument */</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-l&quot;</span><span class="p">))</span><span class="w">   </span><span class="cm">/* number of lines in vertical list */</span>
<span class="w">			</span><span class="n">lines</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">atoi</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">]);</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-z&quot;</span><span class="p">))</span><span class="w">   </span><span class="cm">/* make dmenu this wide */</span>
<span class="w">			</span><span class="n">dmw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">atoi</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">]);</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-m&quot;</span><span class="p">))</span>
<span class="w">			</span><span class="n">mon</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">atoi</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">]);</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-p&quot;</span><span class="p">))</span><span class="w">   </span><span class="cm">/* adds prompt to left of input field */</span>
<span class="w">			</span><span class="n">prompt</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">];</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-fn&quot;</span><span class="p">))</span><span class="w">  </span><span class="cm">/* font or font set */</span>
<span class="w">			</span><span class="n">fonts</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">];</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-nb&quot;</span><span class="p">))</span><span class="w">  </span><span class="cm">/* normal background color */</span>
<span class="w">			</span><span class="n">colors</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">][</span><span class="n">ColBg</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">];</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-nf&quot;</span><span class="p">))</span><span class="w">  </span><span class="cm">/* normal foreground color */</span>
<span class="w">			</span><span class="n">colors</span><span class="p">[</span><span class="n">SchemeNorm</span><span class="p">][</span><span class="n">ColFg</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">];</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-sb&quot;</span><span class="p">))</span><span class="w">  </span><span class="cm">/* selected background color */</span>
<span class="w">			</span><span class="n">colors</span><span class="p">[</span><span class="n">SchemeSel</span><span class="p">][</span><span class="n">ColBg</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">];</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-sf&quot;</span><span class="p">))</span><span class="w">  </span><span class="cm">/* selected foreground color */</span>
<span class="w">			</span><span class="n">colors</span><span class="p">[</span><span class="n">SchemeSel</span><span class="p">][</span><span class="n">ColFg</span><span class="p">]</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">];</span>
<span class="w">		</span><span class="k">else</span><span class="w"> </span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="w"> </span><span class="s">&quot;-w&quot;</span><span class="p">))</span><span class="w">   </span><span class="cm">/* embedding window id */</span>
<span class="w">			</span><span class="n">embed</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">argv</span><span class="p">[</span><span class="o">++</span><span class="n">i</span><span class="p">];</span>
<span class="w">		</span><span class="k">else</span>
<span class="w">			</span><span class="n">usage</span><span class="p">();</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">setlocale</span><span class="p">(</span><span class="n">LC_CTYPE</span><span class="p">,</span><span class="w"> </span><span class="s">&quot;&quot;</span><span class="p">)</span><span class="w"> </span><span class="o">||</span><span class="w"> </span><span class="o">!</span><span class="n">XSupportsLocale</span><span class="p">())</span>
<span class="w">		</span><span class="n">fputs</span><span class="p">(</span><span class="s">&quot;warning: no locale support</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span><span class="w"> </span><span class="n">stderr</span><span class="p">);</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">dpy</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">XOpenDisplay</span><span class="p">(</span><span class="nb">NULL</span><span class="p">)))</span>
<span class="w">		</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;cannot open display&quot;</span><span class="p">);</span>
<span class="w">	</span><span class="n">screen</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">DefaultScreen</span><span class="p">(</span><span class="n">dpy</span><span class="p">);</span>
<span class="w">	</span><span class="n">root</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">RootWindow</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">screen</span><span class="p">);</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">embed</span><span class="w"> </span><span class="o">||</span><span class="w"> </span><span class="o">!</span><span class="p">(</span><span class="n">parentwin</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">strtol</span><span class="p">(</span><span class="n">embed</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">,</span><span class="w"> </span><span class="mi">0</span><span class="p">)))</span>
<span class="w">		</span><span class="n">parentwin</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">root</span><span class="p">;</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">XGetWindowAttributes</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">parentwin</span><span class="p">,</span><span class="w"> </span><span class="o">&amp;</span><span class="n">wa</span><span class="p">))</span>
<span class="w">		</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;could not get embedding window attributes: 0x%lx&quot;</span><span class="p">,</span>
<span class="w">		    </span><span class="n">parentwin</span><span class="p">);</span>
<span class="w">	</span><span class="n">drw</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">drw_create</span><span class="p">(</span><span class="n">dpy</span><span class="p">,</span><span class="w"> </span><span class="n">screen</span><span class="p">,</span><span class="w"> </span><span class="n">root</span><span class="p">,</span><span class="w"> </span><span class="n">wa</span><span class="p">.</span><span class="n">width</span><span class="p">,</span><span class="w"> </span><span class="n">wa</span><span class="p">.</span><span class="n">height</span><span class="p">);</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="o">!</span><span class="n">drw_fontset_create</span><span class="p">(</span><span class="n">drw</span><span class="p">,</span><span class="w"> </span><span class="n">fonts</span><span class="p">,</span><span class="w"> </span><span class="n">LENGTH</span><span class="p">(</span><span class="n">fonts</span><span class="p">)))</span>
<span class="w">		</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;no fonts could be loaded.&quot;</span><span class="p">);</span>
<span class="w">	</span><span class="n">lrpad</span><span class="w"> </span><span class="o">=</span><span class="w"> </span><span class="n">drw</span><span class="o">-&gt;</span><span class="n">fonts</span><span class="o">-&gt;</span><span class="n">h</span><span class="p">;</span>

<span class="cp">#ifdef __OpenBSD__</span>
<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">pledge</span><span class="p">(</span><span class="s">&quot;stdio rpath&quot;</span><span class="p">,</span><span class="w"> </span><span class="nb">NULL</span><span class="p">)</span><span class="w"> </span><span class="o">==</span><span class="w"> </span><span class="mi">-1</span><span class="p">)</span>
<span class="w">		</span><span class="n">die</span><span class="p">(</span><span class="s">&quot;pledge&quot;</span><span class="p">);</span>
<span class="cp">#endif</span>

<span class="w">	</span><span class="k">if</span><span class="w"> </span><span class="p">(</span><span class="n">fast</span><span class="w"> </span><span class="o">&amp;&amp;</span><span class="w"> </span><span class="o">!</span><span class="n">isatty</span><span class="p">(</span><span class="mi">0</span><span class="p">))</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">grabkeyboard</span><span class="p">();</span>
<span class="w">		</span><span class="n">readstdin</span><span class="p">();</span>
<span class="w">	</span><span class="p">}</span><span class="w"> </span><span class="k">else</span><span class="w"> </span><span class="p">{</span>
<span class="w">		</span><span class="n">readstdin</span><span class="p">();</span>
<span class="w">		</span><span class="n">grabkeyboard</span><span class="p">();</span>
<span class="w">	</span><span class="p">}</span>
<span class="w">	</span><span class="n">setup</span><span class="p">();</span>
<span class="w">	</span><span class="n">run</span><span class="p">();</span>

<span class="w">	</span><span class="k">return</span><span class="w"> </span><span class="mi">1</span><span class="p">;</span><span class="w"> </span><span class="cm">/* unreachable */</span>
<span class="p">}</span>
</pre></div>

    </div>
    
    
</div>


    
    
<script src="/static/linelight.js"></script>

  </body>
</html>