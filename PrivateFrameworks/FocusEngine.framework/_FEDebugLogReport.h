/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FocusEngine.framework/FocusEngine
 */

@interface _FEDebugLogReport : NSObject {
    unsigned long long  _currentIndentLevel;
    id /* block */  _fallbackMessagePrefixHandler;
    NSMutableArray * _prefixStack;
    NSMutableArray * _statements;
}

@property (nonatomic) unsigned long long currentIndentLevel;
@property (nonatomic, copy) id /* block */ fallbackMessagePrefixHandler;
@property (nonatomic, readonly) unsigned long long messageCount;
@property (getter=_prefixStack, nonatomic, retain) NSMutableArray *prefixStack;
@property (getter=_statements, nonatomic, retain) NSMutableArray *statements;

- (void).cxx_destruct;
- (id)_messagePrefixAtIndentLevel:(unsigned long long)arg1;
- (id)_prefixStack;
- (id)_statements;
- (void)addLineBreak;
- (void)addMessage:(id)arg1;
- (void)addMessageWithFormat:(id)arg1;
- (void)clearAllMessagePrefixes;
- (unsigned long long)currentIndentLevel;
- (void)decrementIndentLevel;
- (void)decrementIndentLevelAndPopMessagePrefix;
- (id /* block */)fallbackMessagePrefixHandler;
- (void)incrementIndentLevel;
- (void)incrementIndentLevelAndPushMessagePrefix:(id)arg1;
- (id)init;
- (unsigned long long)messageCount;
- (void)popMessagePrefix;
- (void)pushMessagePrefix:(id)arg1;
- (void)pushMessagePrefixHandler:(id /* block */)arg1;
- (void)resetIndentLevel;
- (void)setCurrentIndentLevel:(unsigned long long)arg1;
- (void)setFallbackMessagePrefixHandler:(id /* block */)arg1;
- (void)setPrefixStack:(id)arg1;
- (void)setStatements:(id)arg1;

@end
