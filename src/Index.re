[@bs.val] external document: Js.t({..}) = "document";
let makeRootElement = () => {
  let container = document##createElement("div");
  container##id #= "root";
  let () = document##body##appendChild(container);
};

makeRootElement();
//ReactDOMRe.renderToElementWithId(<App />, "root");
ReactDOMRe.renderToElementWithId(
  <Test1> { React.string("Hello from Test ??!") } </Test1>, 
  "root");

