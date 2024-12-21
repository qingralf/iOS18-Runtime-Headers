/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARRelevantTextContext : NSObject {
    bool  _abortCommandSuppression;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contextUpdateLock;
    bool  _cursorInVisibleText;
    bool  _disambiguationActive;
    bool  _favorCommandSuppression;
    NSString * _leftContext;
    NSString * _rightContext;
    bool  _undoEvent;
}

@property bool abortCommandSuppression;
@property bool cursorInVisibleText;
@property bool disambiguationActive;
@property bool favorCommandSuppression;
@property bool undoEvent;

- (void).cxx_destruct;
- (bool)abortCommandSuppression;
- (void)appendToLeftContext:(id)arg1;
- (bool)cursorInVisibleText;
- (bool)disambiguationActive;
- (bool)favorCommandSuppression;
- (void)getLeftAndRightContextWithCompletion:(id /* block */)arg1;
- (bool)getUndoEventAndReset;
- (id)init;
- (void)notifyUndoEventFromClient;
- (void)reset;
- (void)setAbortCommandSuppression:(bool)arg1;
- (void)setCursorInVisibleText:(bool)arg1;
- (void)setDisambiguationActive:(bool)arg1;
- (void)setFavorCommandSuppression:(bool)arg1;
- (void)setLeftContext:(id)arg1;
- (void)setLeftContext:(id)arg1 rightContext:(id)arg2;
- (void)setRightContext:(id)arg1;
- (void)setUndoEvent:(bool)arg1;
- (bool)undoEvent;

@end