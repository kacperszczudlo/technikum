import 'bootstrap/dist/css/bootstrap.css';

export const CardComponent = () => {
    return (
        <div className='container'>
    <div className="card">
    <div className="card-body">
      <h5 className="card-title" style={{color:"green"}}>Okno główne</h5>
      <h6 className="card-subtitle mb-2 text-muted">Fajne okno</h6>
      <p className="card-text">Lorem ipsum dolor sit amet consectetur adipisicing elit. Minus et exercitationem distinctio totam beatae, molestiae non in, atque ab, voluptates dolores. Sequi minima deserunt quos explicabo dolores deleniti ut numquam?</p>
      <a href="#" className="card-link">Card link</a>
      <a href="#" className="card-link">Another link</a>
    </div>
  </div>
  </div>
    );
}