[@react.component]
let make = () => {

    <section className="container section" id="forms">
        <div className="row">
            <div className="col s12 l5">
                <p> {R.str("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco labori")}</p>
            </div>
            <div className="col s12 l5 offset-l2">
                <form action="">
                    <div className="input-field">
                        <i className="material-icons prefix">{R.str("email")}</i>
                        <input type_="email" /> 
                        <label htmlFor="email"> {R.str("Your email")} </label>
                    </div>
                    <div className="input-field">
                        <i className="material-icons prefix">{R.str("message")}</i>
                        <textarea type_="message" className="materialize-textarea" /> 
                        <label htmlFor="message"> {R.str("Your message")} </label>
                    </div>
                </form>
            </div>
        </div>
    </section>

};