

[@bs.val] external document: Js.t({..}) = "document";
[@bs.module "./m.js"] external init_sidenav: ( unit => unit ) =  "init_sidenav";

[@react.component]
let make = (~children) => {
  let (show, setShow) = React.useState(() => true);

  React.useEffect0(() => {
    let id = Js.Global.setInterval( () => setShow(previousShow => !previousShow), 100000, );
    Some(() => Js.Global.clearInterval(id));
  });

  let style =
    if (show) { 
      ReactDOMRe.Style.make(
        ~opacity="1", 
        ~transition="opacity 1s", 
        ~color="red",
        ~fontSize="10px",
        ());
    } else { 
      ReactDOMRe.Style.make(~opacity="0", ~transition="opacity 1s", ());
    };

  let sn_handle = (e) => {
    ReactEvent.Mouse.preventDefault(e);
    init_sidenav()
  };

  <div className="mymediastyle1">
    <header>
      <nav className="nav-wrapper"> 
        <div className="container">
          <a href="" className="brand-logo"> {R.str("Watch Your SELF")} </a>

          <a href="" className="sidenav-trigger show-on-large" data="slide-out" onClick={sn_handle}> 
            <i className="material-icons"> {R.str("menu")}</i>
          </a>
          <ul className="right hide-on-med-and-down">
            <li> <a href="#" > {R.str("Emos")} </a> </li>
            <li> <a href="#" > {R.str("Grades")} </a> </li>
            <li> <a href="#" > {R.str("Diagnosis")} </a> </li>
          </ul>
        </div>
      <ul className="sidenav grey lighten-2" id="slide-out">
        <li> <a href="#" > {R.str("Emos")} </a> </li>
        <li> <a href="#" > {R.str("Grades")} </a> </li>
        <li> <a href="#" > {R.str("Diagnosis")} </a> </li>
      </ul>
      </nav>
          

      <div style> children </div>
    </header>


    // <div>
    // <ReasonUsingNavbarJS />
    // </div>
  </div>;
};
