[@react.component]
let make = () => {
    <header>
      <nav className="nav-wrapper"> 
        <div className="container">
          <a href="" className="brand-logo"> {R.str("Watch Your SELF")} </a>

          <a href="" className="sidenav-trigger" data="slide-out"> 
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
          

    </header>

};
