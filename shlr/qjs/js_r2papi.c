static const char *const js_r2papi_qjs = "" \
  "Object.defineProperty(G,\"__esModule\",{value:!0}),G.Base64=G.N"\
  "ativePointer=G.R2Papi=void 0;const shell_js_1=G;G.R2Papi=clas"\
  "s{constructor(t){this.r2=t}jsonToTypescript(t,s){let i=`inter"\
  "face ${t} {\n`;s.length&&0<s.length&&(s=s[0]);for(let t of Obj"\
  "ect.keys(s))i+=`    ${t}: ${typeof s[t]};\n`;return i+`}\n`}new"\
  "Map(t,s,i,e,r,n=\"\"){this.cmd(`om ${t} ${s} ${i} ${e} ${r} `+n"\
  ")}at(t){return new NativePointer(t)}getShell(){return new she"\
  "ll_js_1.R2PapiShell(this)}version(){return this.r2.cmd(\"?Vq\")"\
  ".trim()}platform(){return this.r2.cmd(\"uname\").trim()}arch(){"\
  "return this.r2.cmd(\"uname -a\").trim()}bits(){return this.r2.c"\
  "md(\"uname -b\").trim()}id(){return+this.r2.cmd(\"?vi:$p\")}print"\
  "At(t,s,i){}clearScreen(){return this.r2.cmd(\"!clear\"),this}ge"\
  "tConfig(t){return this.r2.call(\"e \"+t).trim()}setConfig(t,s){"\
  "return this.r2.call(\"e \"+t+\"=\"+s),this}getRegisters(){return "\
  "this.cmdj(\"drj\")}resizeFile(t){return this.cmd(\"r \"+t),this}i"\
  "nsertNullBytes(t,s){return this.cmd(`r+${t}@`+(s=void 0===s?\""\
  "$$\":s)),this}removeBytes(t,s){return this.cmd(`r-${t}@`+(s=vo"\
  "id 0===s?\"$$\":s)),this}seek(t){return this.cmd(\"s \"+t),this}g"\
  "etBlockSize(){return+this.cmd(\"b\")}setBlockSize(t){return thi"\
  "s.cmd(\"b \"+t),this}enumerateThreads(){return[{context:this.cm"\
  "dj(\"drj\"),id:0,state:\"waiting\",selected:!0}]}currentThreadId("\
  "){return+this.cmd(\"e cfg.debug\")?+this.cmd(\"dpt.\"):this.id()}"\
  "setRegisters(t){for(var s of Object.keys(t)){var i=t[s];this."\
  "r2.cmd(\"dr \"+s+\"=\"+i)}}hex(t){return this.r2.cmd(\"?v \"+t).tri"\
  "m()}step(){return this.r2.cmd(\"ds\"),this}stepOver(){return th"\
  "is.r2.cmd(\"dso\"),this}math(t){return+this.r2.cmd(\"?v \"+t)}ste"\
  "pUntil(t){this.cmd(\"dsu \"+t)}searchDisasm(t){return this.call"\
  "j(\"/ad \"+t)}searchString(t){return this.cmdj(\"/j \"+t)}searchB"\
  "ytes(t){t=t.map(function(t){return(255&t).toString(16)}).join"\
  "(\"\");return this.cmdj(\"/xj \"+t)}binInfo(){try{return this.cmd"\
  "j(\"ij~{bin}\")}catch(t){return{}}}selectBinary(t){this.call(\"o"\
  "b \"+t)}openFile(t){this.call(\"o \"+t)}enumeratePlugins(t){swit"\
  "ch(t){case\"bin\":return this.callj(\"Lij\");case\"io\":return this"\
  ".callj(\"Loj\");case\"core\":return this.callj(\"Lcj\");case\"anal\":"\
  "return this.callj(\"Laj\");case\"lang\":return this.callj(\"Llj\")}"\
  "return[]}enumerateModules(){return this.callj(\"dmmj\")}enumera"\
  "teFiles(){return this.callj(\"oj\")}enumerateBinaries(){return "\
  "this.callj(\"obj\")}enumerateMaps(){return this.callj(\"omj\")}en"\
  "umerateSymbols(){return this.callj(\"isj\")}enumerateExports(){"\
  "return this.callj(\"iEj\")}enumerateImports(){return this.callj"\
  "(\"iij\")}enumerateLibraries(){return this.callj(\"ilj\")}enumera"\
  "teSections(){return this.callj(\"iSj\")}enumerateSegments(){ret"\
  "urn this.callj(\"iSSj\")}enumerateEntrypoints(){return this.cal"\
  "lj(\"iej\")}enumerateRelocations(){return this.callj(\"irj\")}enu"\
  "merateFunctions(){return this.cmdj(\"aflj\")}enumerateFlags(){r"\
  "eturn this.cmdj(\"fj\")}skip(){this.r2.cmd(\"dss\")}ptr(t){return"\
  " new NativePointer(t,this)}call(t){return this.r2.call(t)}cal"\
  "lj(t){return JSON.parse(this.call(t))}cmd(t){return this.r2.c"\
  "md(t)}cmdj(t){return JSON.parse(this.cmd(t))}log(t){return th"\
  "is.r2.log(t)}clippy(t){this.r2.log(this.r2.cmd(\"?E \"+t))}asci"\
  "i(t){this.r2.log(this.r2.cmd(\"?ea \"+t))}};class NativePointer"\
  "{constructor(t,s){this.api=void 0===s?G.R:s,this.addr=(\"\"+t)."\
  "trim()}hexdump(t){return this.api.cmd(`x${void 0===t?\"\":\"\"+t}"\
  "@`+this.addr)}functionGraph(t){return\"dot\"===t?this.api.cmd(\""\
  "agfd@ \"+this.addr):\"json\"===t?this.api.cmd(\"agfj@\"+this.addr)"\
  ":\"mermaid\"===t?this.api.cmd(\"agfm@\"+this.addr):this.api.cmd(\""\
  "agf@\"+this.addr)}readByteArray(t){return JSON.parse(this.api."\
  "cmd(`p8j ${t}@`+this.addr))}and(t){return this.addr=this.api."\
  "call(`?v ${this.addr} & `+t).trim(),this}or(t){return this.ad"\
  "dr=this.api.call(`?v ${this.addr} | `+t).trim(),this}add(t){r"\
  "eturn this.addr=this.api.call(`?v ${this.addr}+`+t).trim(),th"\
  "is}sub(t){return this.addr=this.api.call(`?v ${this.addr}-`+t"\
  ").trim(),this}writeByteArray(t){return this.api.cmd(\"wx \"+t.j"\
  "oin(\"\")),this}writeAssembly(t){return this.api.cmd(`\"wa ${t} "\
  "@ `+this.addr),this}writeCString(t){return this.api.call(\"w \""\
  "+t),this}isNull(){return 0==+this.addr}compare(t){return(t=\"s"\
  "tring\"!=typeof t&&\"number\"!=typeof t?t:new NativePointer(t))."\
  "addr===this.addr}pointsToNull(){return this.readPointer().com"\
  "pare(0)}toString(){return this.addr.trim()}writePointer(t){va"\
  "r s=64==+this.api.getConfig(\"asm.bits\")?\"wv8\":\"wv4\";this.api."\
  "cmd(s+` ${t}@`+this)}readPointer(){return 64==+this.api.getCo"\
  "nfig(\"asm.bits\")?new NativePointer(this.api.call(\"pv8@\"+this."\
  "addr)):new NativePointer(this.api.call(\"pv4@\"+this.addr))}rea"\
  "dU8(){return+this.api.cmd('pv1@\"'+this.addr)}readU16(){return"\
  "+this.api.cmd('pv2@\"'+this.addr)}readU32(){return+this.api.cm"\
  "d('pv4@\"'+this.addr)}readU64(){return+this.api.cmd('pv8@\"'+th"\
  "is.addr)}writeInt(t){return+this.api.cmd(`wv4 ${t}@`+this.add"\
  "r)}writeU8(t){return this.api.cmd(`wv1 ${t}@`+this.addr),!0}w"\
  "riteU16(t){return this.api.cmd(`wv2 ${t}@`+this.addr),!0}writ"\
  "eU32(t){return this.api.cmd(`wv4 ${t}@`+this.addr),!0}writeU6"\
  "4(t){return this.api.cmd(`wv8 ${t}@`+this.addr),!0}readInt(){"\
  "return+this.api.cmd('pv4@\"'+this.addr)}readCString(){return J"\
  "SON.parse(this.api.cmd(\"psj@\"+this.addr)).string}instruction("\
  "){return this.api.cmdj(\"aoj@\"+this.addr)[0]}disassemble(t){re"\
  "turn this.api.cmd(`pd ${void 0===t?\"\":\"\"+t}@`+this.addr)}anal"\
  "yzeFunction(){return this.api.cmd(\"af@\"+this.addr),this}analy"\
  "zeFunctionRecursively(){return this.api.cmd(\"afr@\"+this.addr)"\
  ",this}analyzeProgram(t){switch(t=void 0===t?0:t){case 0:this."\
  "api.cmd(\"aa\");break;case 1:this.api.cmd(\"aaa\");break;case 2:t"\
  "his.api.cmd(\"aaaa\");break;case 3:this.api.cmd(\"aaaaa\")}return"\
  " this}name(){return this.api.cmd(\"fd \"+this.addr).trim()}basi"\
  "cBlock(){return this.api.cmdj(\"abj@\"+this.addr)}functionBasic"\
  "Blocks(){return this.api.cmdj(\"afbj@\"+this.addr)}xrefs(){retu"\
  "rn this.api.cmdj(\"axtj@\"+this.addr)}}G.NativePointer=NativePo"\
  "inter;G.Base64=class{static encode(t){return(0,G.b64)(t)}stat"\
  "ic decode(t){return(0,G.b64)(t,!0)}},Object.defineProperty(G,"\
  "\"__esModule\",{value:!0}),G.R2PapiShell=void 0;G.R2PapiShell=c"\
  "lass{constructor(t){this.rp=t}mkdir(t,s){return!0===s?this.rp"\
  ".call(\"mkdir -p \"+t):this.rp.call(\"mkdir \"+t),!0}unlink(t){re"\
  "turn this.rp.call(\"rm \"+t),!0}chdir(t){return this.rp.call(\"c"\
  "d \"+t),!0}ls(){return this.rp.call(\"ls -q\").trim().split(\"\\n\""\
  ")}fileExists(t){return!1}open(t){this.rp.call(\"open \"+t)}syst"\
  "em(t){return this.rp.call(\"!\"+t),0}run(t){return this.rp.call"\
  "(\"rm \"+t),0}mount(t,s){return this.rp.call(`m ${t} `+s),!0}um"\
  "ount(t){this.rp.call(\"m-\"+t)}chdir2(t){return this.rp.call(\"m"\
  "dq \"+(t=void 0===t?\"/\":t)),!0}ls2(t){return this.rp.call(\"mdq"\
  " \"+(t=void 0===t?\"/\":t)).trim().split(\"\\n\")}enumerateMountpoi"\
  "nts(){return this.rp.cmdj(\"mlj\")}isSymlink(t){return!1}isDire"\
  "ctory(t){return!1}},Object.defineProperty(G,\"__esModule\",{val"\
  "ue:!0}),G.EsilParser=G.EsilNode=G.EsilToken=void 0;class Esil"\
  "Token{constructor(t=\"\",s=0){this.label=\"\",this.comment=\"\",thi"\
  "s.text=\"\",this.addr=\"0\",this.position=0,this.text=t,this.posi"\
  "tion=s}toString(){return this.text}}G.EsilToken=EsilToken;cla"\
  "ss EsilNode{constructor(t=new EsilToken,s){this.type=\"none\",t"\
  "his.token=t,this.children=[]}setSides(t,s){this.lhs=t,this.rh"\
  "s=s}addChildren(t,s){void 0!==t&&this.children.push(t),void 0"\
  "!==s&&this.children.push(s)}toEsil(){if(void 0===this.lhs||vo"\
  "id 0===this.rhs)return\"\";{let t=this.lhs.toEsil();return\"\"!=="\
  "t&&(t+=\",\"),this.rhs.toEsil()+\",\"+t+this.token}}toString(){le"\
  "t t=\"\";if(\"\"!==this.token.label&&(t+=this.token.label+\":\\n\"),"\
  "this.token.addr,\"\"!==this.token.comment&&(t+=\"/*\"+this.token."\
  "comment+\"*/\\n\"),\"GOTO\"===this.token.toString()&&(0<this.child"\
  "ren.length?t+=\"goto label_\"+this.children[0].token.position+\""\
  ";\\n\":t+=`goto label_0;\n`),0<this.children.length){t+=`  (if ("\
  "${this.rhs})\n`;for(var s of this.children)null!==s&&\"\"!=(s=s."\
  "toString())&&(t+=`  ${s}\n`);t+=\"  )\\n\"}return void 0!==this.l"\
  "hs&&void 0!==this.rhs?t+`    ( ${this.lhs} ${this.token} ${th"\
  "is.rhs} )`:t+this.token.toString()}}G.EsilNode=EsilNode;G.Esi"\
  "lParser=class{constructor(t){this.cur=0,this.r2=t,this.cur=0,"\
  "this.stack=[],this.nodes=[],this.tokens=[],this.root=new Esil"\
  "Node(new EsilToken(\"function\",0),\"block\")}toJSON(){if(0<this."\
  "stack.length)throw new Error(\"The ESIL stack is not empty\");r"\
  "eturn JSON.stringify(this.root,null,2)}toEsil(){return this.n"\
  "odes.map(t=>t.toEsil()).join(\",\")}optimizeFlags(t){void 0!==t"\
  ".rhs&&this.optimizeFlags(t.rhs),void 0!==t.lhs&&this.optimize"\
  "Flags(t.lhs);for(let s=0;s<t.children.length;s++)this.optimiz"\
  "eFlags(t.children[s]);var s=t.toString();4096<+s&&\"\"!=(s=r2.c"\
  "md(\"fd.@ \"+s).trim().split(\"\\n\")[0].trim())&&-1===s.indexOf(\""\
  "+\")&&(t.token.text=s)}optimize(t){-1!=t.indexOf(\"flag\")&&this"\
  ".optimizeFlags(this.root)}toString(){return this.root.childre"\
  "n.map(t=>t.toString()).join(\";\\n\")}reset(){this.nodes=[],this"\
  ".stack=[],this.tokens=[],this.cur=0,this.root=new EsilNode(ne"\
  "w EsilToken(\"function\",0),\"block\")}parseRange(t,s){let i=t;fo"\
  "r(;i<this.tokens.length&&i<s;){const t=this.peek(i);if(!t)bre"\
  "ak;this.cur=i,this.pushToken(t),i=this.cur,i++}}parseFunction"\
  "(t){var s=this;var e=r2.cmd(\"?v $$\").trim(),r=(void 0===t&&(t"\
  "=e),r2.cmdj(\"afbj@\"+t));for(let t of r)r2.cmd(\"s \"+t.addr),fu"\
  "nction(t){const i=r2.cmd(\"pie \"+t+\" @e:scr.color=0\").trim().s"\
  "plit(\"\\n\");for(const t of i)if(0===t.length)console.log(\"Empt"\
  "y\");else{const i=t.split(\" \");1<i.length&&(r2.cmd(\"s \"+i[0]),"\
  "s.parse(i[1],i[0]),s.optimize(\"flags,labels\"))}}(t.ninstr);r2"\
  ".cmd(\"s \"+e)}parse(t,s){const i=t.trim().split(\",\").map(t=>t."\
  "trim()),e=this.tokens.length;for(let t of i){const i=new Esil"\
  "Token(t,this.tokens.length);void 0!==s&&(i.addr=s),this.token"\
  "s.push(i)}t=this.tokens.length;this.parseRange(e,t)}peek(t){r"\
  "eturn this.tokens[t]}pushToken(t){if(this.isNumber(t)){var s="\
  "new EsilNode(t,\"number\");this.stack.push(s),this.nodes.push(s"\
  ")}else if(this.isInternal(t)){const s=new EsilNode(t,\"flag\");"\
  "this.stack.push(s),this.nodes.push(s)}else if(!this.isOperati"\
  "on(t)){const s=new EsilNode(t,\"register\");this.stack.push(s),"\
  "this.nodes.push(s)}}isNumber(t){return!!t.toString().startsWi"\
  "th(\"0\")||0<+t}isInternal(t){t=t.toString();return t.startsWit"\
  "h(\"$\")&&1<t.length}parseUntil(t){t+=1;let i=t;const e=[],r=th"\
  "is.nodes.length;for(this.stack.forEach(t=>e.push(t));i<this.t"\
  "okens.length;){const t=this.peek(i);if(!t)break;if(\"}\"===t.to"\
  "String())break;if(\"}{\"===t.toString())break;i++}this.stack=e;"\
  "var n=i;return this.parseRange(t,n),this.nodes.length==r?null"\
  ":this.nodes[this.nodes.length-1]}getNodeFor(t){if(void 0!==th"\
  "is.peek(t)){for(var s of this.nodes)if(s.token.position===t)r"\
  "eturn s;this.nodes.push(new EsilNode(new EsilToken(\"label\",t)"\
  ",\"label\"))}return null}findNodeFor(t){for(var s of this.nodes"\
  ")if(s.token.position===t)return s;return null}isOperation(t){"\
  "switch(t.toString()){case\"[1]\":case\"[2]\":case\"[4]\":case\"[8]\":"\
  "if(!(1<=this.stack.length))throw new Error(\"Stack needs more "\
  "items\");{const t=this.stack.pop();new EsilNode(t.token,\"opera"\
  "tion\"),this.stack.push(t)}return!0;case\"!\":var s,i,e;if(1<=th"\
  "is.stack.length)return s=new EsilNode(new EsilToken(\"\",t.posi"\
  "tion),\"none\"),i=this.stack.pop(),(e=new EsilNode(t,\"operation"\
  "\")).setSides(s,i),this.stack.push(e),!0;throw new Error(\"Stac"\
  "k needs more items\");case\"\":case\"}\":case\"}{\":return!0;case\"DU"\
  "P\":{if(this.stack.length<1)throw new Error(\"goto cant pop\");c"\
  "onst t=this.stack.pop();this.stack.push(t),this.stack.push(t)"\
  "}return!0;case\"GOTO\":if(null!==this.peek(t.position-1)){if(th"\
  "is.stack.length<1)throw new Error(\"goto cant pop\");const s=th"\
  "is.stack.pop();if(null!==s){const i=0|+s.toString();if(0<i){c"\
  "onst s=this.peek(i);if(void 0!==s){s.label=\"label_\"+i,s.comme"\
  "nt=\"hehe\";const e=new EsilNode(t,\"goto\"),r=this.getNodeFor(s."\
  "position);null!=r&&e.children.push(r),this.root.children.push"\
  "(e)}else console.error(\"Cannot find goto node\")}else console."\
  "error(\"Cannot find dest node for goto\")}}return!0;case\"?{\":if"\
  "(!(1<=this.stack.length))throw new Error(\"Stack needs more it"\
  "ems\");{const s=new EsilNode(new EsilToken(\"if\",t.position),\"n"\
  "one\"),i=this.stack.pop(),e=new EsilNode(t,\"operation\");e.setS"\
  "ides(s,i);let r=this.parseUntil(t.position),n=null;null!==r&&"\
  "(e.children.push(r),this.nodes.push(r),null!==(n=this.parseUn"\
  "til(r.token.position+1)))&&(e.children.push(n),this.nodes.pus"\
  "h(n)),this.nodes.push(e),this.root.children.push(e),null!==n&"\
  "&(this.cur=n.token.position)}return!0;case\"-\":if(!(2<=this.st"\
  "ack.length))throw new Error(\"Stack needs more items\");{const "\
  "s=this.stack.pop(),i=this.stack.pop(),e=new EsilNode(t,\"opera"\
  "tion\");e.setSides(s,i),this.stack.length,this.stack.push(e),t"\
  "his.nodes.push(e)}return!0;case\"<\":case\">\":case\"^\":case\"&\":ca"\
  "se\"|\":case\"+\":case\"*\":case\"/\":case\">>=\":case\"<<=\":case\">>>=\":"\
  "case\"<<<=\":case\">>>>=\":case\"<<<<=\":if(!(2<=this.stack.length)"\
  ")throw new Error(\"Stack needs more items\");{const s=this.stac"\
  "k.pop(),i=this.stack.pop(),e=new EsilNode(t,\"operation\");e.se"\
  "tSides(s,i),this.stack.length,this.stack.push(e),this.nodes.p"\
  "ush(e)}return!0;case\"=\":case\":=\":case\"-=\":case\"+=\":case\"==\":c"\
  "ase\"=[1]\":case\"=[2]\":case\"=[4]\":case\"=[8]\":if(!(2<=this.stack"\
  ".length))throw new Error(\"Stack needs more items\");{const s=t"\
  "his.stack.pop(),i=this.stack.pop(),e=new EsilNode(t,\"operatio"\
  "n\");e.setSides(s,i),0===this.stack.length&&this.root.children"\
  ".push(e),this.nodes.push(e)}return!0}return!1}};\n";
