ReactPdfNode.render <MyDocument /> "example.pdf" |>
Js.Promise.then_ (fun () => Js.Promise.resolve @@ Js.log "Pdf created");
