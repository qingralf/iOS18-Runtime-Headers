/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDFoundationModelContextGenerator : NSObject

+ (id)_messageInReplyToMessage:(id)arg1 messagePersistence:(id)arg2 error:(id*)arg3;
+ (id)log;
+ (id)originalContentMessageForMessage:(id)arg1 limitOfInReplyToAncestors:(unsigned long long)arg2 checkForForwardedMessages:(bool)arg3 condenseEmptyLines:(bool)arg4 messagePersistence:(id)arg5 htmlStringFromMessage:(id /* block */)arg6 error:(id*)arg7;
+ (id)originalContentMessageForPersistedMessage:(id)arg1 condenseEmptyLines:(bool)arg2 preserveQuotedForwardedContent:(bool)arg3 htmlStringFromMessage:(id /* block */)arg4;
+ (id)originalContentMessagesForPersistedMessages:(id)arg1 condenseEmptyLines:(bool)arg2 preserveQuotedForwardedContent:(bool)arg3 htmlStringFromMessage:(id /* block */)arg4;

@end