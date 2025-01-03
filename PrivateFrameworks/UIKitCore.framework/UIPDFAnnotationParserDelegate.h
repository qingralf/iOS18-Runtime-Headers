/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {
    UIPDFAnnotation * _annotation;
    NSMutableString * _characters;
    bool  _parseError;
}

@property (nonatomic, retain) UIPDFAnnotation *annotation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool parseError;
@property (readonly) Class superclass;

- (id)annotation;
- (void)dealloc;
- (id)init;
- (bool)parseError;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)setAnnotation:(id)arg1;

@end
