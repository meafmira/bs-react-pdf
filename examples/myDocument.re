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
          <Text key="hello"> (ReasonReact.stringToElement "Section #1") </Text>
        </View>
        <View style=styles##section>
          <Text> (ReasonReact.stringToElement "Section #2") </Text>
        </View>
      </Page>
    </Document>
};
