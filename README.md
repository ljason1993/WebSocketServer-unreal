# WebSocketServer-unreal
c++的websocket服务器，h5秒连，结构简单操作简单
c++ websocket server ，h5 client fast connect


---------------------------js example--------------------------------

		function MakeWebSocket() {
			let ws = new WebSocket("ws://192.168.0.119:26217");
 
			ws.onmessage = function (event) {
				event.data.text().then(text => {
					console.log(" >LJason< 日志：字符串 ",text);
					console.log(" >LJason< 日志：对象 ",JSON.parse(text));
				});
			};
 
			ws.onerror = function (event) {
				console.error(" >LJason< 错误：我BUG了");
			};
 
			ws.onclose = function (event) {
				console.warn(" >LJason< 警告：我关闭了",event);
			};
 
			ws.onopen=function (event) {
				console.log(" >LJason< 日志：我打开了++++++++++++++",event);
			}
		}
 
 send msg
    ws.send("hello unreal ")
    
---------------------------ue example--------------------------------                          
 \Plugins\ZWebSocketServer\Content\Level\Example 
 see this level blueprint
 
 ---------------------------中国--------------------------------                     
 国人直接来我博客看                   
 https://blog.csdn.net/ljason1993/article/details/123031678                 
 这是个最基础版的server，拓展功能，大家自便，随意点
