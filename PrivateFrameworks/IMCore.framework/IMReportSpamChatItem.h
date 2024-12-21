/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMReportSpamChatItem : IMTranscriptChatItem {
    bool  _hasMultipleMessages;
    bool  _isBusinessChat;
    bool  _isGroupMessage;
    bool  _showReportSMSSpam;
    bool  _wasReportedAsSpam;
}

@property (nonatomic, readonly) bool hasMultipleMessages;
@property (nonatomic, readonly) bool isBusinessChat;
@property (nonatomic, readonly) bool isGroupMessage;
@property (nonatomic, readonly) bool showReportSMSSpam;
@property (nonatomic, readonly) bool wasReportedAsSpam;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_initWithItem:(id)arg1 wasReportedAsSpam:(bool)arg2 isGroup:(bool)arg3 hasMultipleMessages:(bool)arg4 showReportSMSSpam:(bool)arg5 isBusinessChat:(bool)arg6;
- (bool)hasMultipleMessages;
- (bool)isBusinessChat;
- (bool)isGroupMessage;
- (bool)showReportSMSSpam;
- (bool)wasReportedAsSpam;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end