/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIObjectModelParser : NSObject <RUITopLevelElementParserDelegate, RemoteUI.RUIXMLTraversalDelegate> {
    NSMutableString * _accumulator;
    RUIActionSignal * _actionSignal;
    NSURL * _baseURL;
    RUIAlertView * _currentAlert;
    NSDictionary * _currentElementAttributes;
    NSMutableArray * _currentPageStack;
    <RUIObjectModelParserDelegate> * _delegate;
    NSMutableArray * _elementStack;
    NSError * _error;
    bool  _foundXMLUI;
    NSMutableArray * _pages;
    int  _parserState;
    bool  _succeeded;
    RUIObjectModel * _uiObjectModel;
    RUIXMLElement * _xmlElement;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <RUIObjectModelParserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool succeeded;
@property (readonly) Class superclass;
@property (nonatomic, retain) RUIXMLElement *xmlElement;

- (void).cxx_destruct;
- (void)_addNavigationBarWithAttributes:(id)arg1;
- (id)_createAndAddPageWithAttributes:(id)arg1;
- (id)_createPageWithName:(id)arg1 attributes:(id)arg2;
- (id)_lastPageCreateIfNeeded;
- (id)_lastRow;
- (void)_logDeprecation:(id)arg1 value:(id)arg2;
- (void)_validateDocumentContent;
- (id)actionSignal;
- (id)baseURL;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)initWithBaseURL:(id)arg1 style:(id)arg2 delegate:(id)arg3 decodingUserInfo:(id)arg4;
- (bool)parseActionSignalWithElementName:(id)arg1;
- (void)parseXMLElement:(id)arg1;
- (void)parser:(id)arg1 setDefaultActionSignal:(id)arg2;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setXmlElement:(id)arg1;
- (bool)succeeded;
- (id)topLevelElementParser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)traversalDelegateDidEndlement:(id)arg1;
- (void)traversalDelegateDidStartElement:(id)arg1;
- (void)traversalDelegateFoundCData:(id)arg1;
- (id)uiObjectModel;
- (id)xmlElement;

@end
