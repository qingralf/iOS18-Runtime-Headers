/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIXMLParserDelegate : NSObject <NSXMLParserDelegate> {
    void _stack;
    void _xmlElement;
    void root;
}

@property (nonatomic, readonly) NSArray *stack;
@property (nonatomic, readonly) RUIXMLElement *xmlElement;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRoot:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)stack;
- (id)xmlElement;

@end
