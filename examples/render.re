ReactPdfNode.render(<MyDocument />, "example.pdf")
|> Js.Promise.then_(() => Js.Promise.resolve @@ Js.log("Pdf created"));
