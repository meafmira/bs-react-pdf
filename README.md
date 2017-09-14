# bs-react-pdf

[react-pdf](https://github.com/diegomura/react-pdf) bindings for [bucklescript](https://bucklescript.github.io/bucklescript/)

## Installation

1. `$ npm i bs-react-pdf`
2. Add `bs-react-pdf` to `bs-dependencies` section of your `bsconfig.json`

## [Examples](https://github.com/meafmira/bs-react-pdf/tree/master/examples)
### Document

```
open ReactPdf.Core;

let styles =
  StyleSheet.create {
    "page": {"flexDirection": "row", "backgroundColor": "#fff"},
    "section": {"margin": 10, "padding": 10, "flexGrow": 1}
  };

let component = ReasonReact.reducerComponent "MyDocument";

let make _children => {
  ...component,
  reducer: fun () (_state: unit) => ReasonReact.NoUpdate,
  render: fun _self =>
    <Document>
      <Page size="A4" style=styles##page>
        <View style=styles##section>
          <Text> (ReasonReact.stringToElement "Section #1") </Text>
        </View>
        <View style=styles##section>
          <Text> (ReasonReact.stringToElement "Section #2") </Text>
        </View>
      </Page>
    </Document>
};
```

### Save in a file

```
ReactPdfNode.render <MyDocument /> "example.pdf" |>
Js.Promise.then_ (fun () => Js.Promise.resolve @@ Js.log "Pdf created");
```