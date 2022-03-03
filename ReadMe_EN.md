WebSocketServer-unreal
c++ websocket server ，h5 client fast connect

---------------------------js example--------------------------------

	function MakeWebSocket() {
		let ws = new WebSocket("ws://192.168.0.119:26217");

		ws.onmessage = function (event) {
			event.data.text().then(text => {
				console.log(" >LJason< ：string  ",text);
				console.log(" >LJason< ：object ",JSON.parse(text));
			});
		};

		ws.onerror = function (event) {
			console.error(" >LJason< ：o bug is coming");
		};

		ws.onclose = function (event) {
			console.warn(" >LJason< ：shut down",event);
		};

		ws.onopen=function (event) {
			console.log(" >LJason< ：open open ",event);
		}
	}
send msg ws.send("hello unreal ")

---------------------------ue example--------------------------------
\Plugins\ZWebSocketServer\Content\Level\Example see this level blueprint
