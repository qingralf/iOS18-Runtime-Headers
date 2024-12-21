/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSatelliteUnavailableForServiceChatItem : IMTranscriptChatItem {
    bool  _isGroupChat;
    NSString * _recipientID;
    IMServiceImpl * _service;
}

@property (nonatomic, readonly) bool isGroupChat;
@property (nonatomic, readonly) NSString *recipientID;
@property (nonatomic, readonly) IMServiceImpl *service;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 service:(id)arg2 recipientID:(id)arg3 isGroupChat:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isGroupChat;
- (id)recipientID;
- (id)service;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end