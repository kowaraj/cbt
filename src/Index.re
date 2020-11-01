[@bs.val] external document: Js.t({..}) = "document";
let makeRootElement = () => {
  let container = document##createElement("div");
  container##id #= "root";
  let () = document##body##appendChild(container);
};

makeRootElement();
//ReactDOMRe.renderToElementWithId(<App />, "root");
ReactDOMRe.renderToElementWithId(
  <Test2> { React.string("Hello 4") } </Test2>, 
  "root");

