/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMKeyTransparencyStatusChangedChatItem : IMTranscriptChatItem {
    NSArray * _affectedHandles;
    bool  _groupChat;
    unsigned long long  _status;
}

@property (nonatomic, readonly, copy) NSArray *affectedHandles;
@property (getter=isGroupChat, readonly) bool groupChat;
@property (nonatomic, readonly) unsigned long long status;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithHandles:(id)arg1 status:(unsigned long long)arg2 isGroupChat:(bool)arg3;
- (id)affectedHandles;
- (bool)isGroupChat;
- (unsigned long long)status;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
