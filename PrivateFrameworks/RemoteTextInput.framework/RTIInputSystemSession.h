/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIInputSystemSession : NSObject {
    RTISessionOptions * _beginOptions;
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
    NSHashTable * _extraSessionDelegates;
    <RTIInputSystemSessionDelegate> * _sessionDelegate;
    RTITextOperations * _textOperations;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) RTITextOperations *_textOperations;
@property (nonatomic, retain) RTISessionOptions *beginOptions;
@property (nonatomic, retain) RTIDocumentState *documentState;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;
@property (nonatomic, retain) NSHashTable *extraSessionDelegates;
@property (nonatomic) <RTIInputSystemSessionDelegate> *sessionDelegate;
@property (nonatomic, retain) RTITextOperations *textOperations;
@property (retain) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2;
- (void)_createTextOperationsIfNecessary;
- (id)_textOperations;
- (void)addSessionDelegate:(id)arg1;
- (void)applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2;
- (id)beginOptions;
- (void)beginOptionsSafeAccess:(id /* block */)arg1;
- (id)documentState;
- (void)documentStateSafeAccess:(id /* block */)arg1;
- (id)documentTraits;
- (void)documentTraitsSafeAccess:(id /* block */)arg1;
- (void)enumerateSessionDelegatesUsingBlock:(id /* block */)arg1;
- (id)extraSessionDelegates;
- (void)flushOperations;
- (void)removeSessionDelegate:(id)arg1;
- (id)sessionDelegate;
- (void)setBeginOptions:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setDocumentTraits:(id)arg1;
- (void)setExtraSessionDelegates:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setTextOperations:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)textOperations;
- (void)textOperationsSafeAccess:(id /* block */)arg1;
- (id)uuid;
- (void)uuidSafeAccess:(id /* block */)arg1;

@end
