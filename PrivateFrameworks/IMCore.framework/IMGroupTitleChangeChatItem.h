/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem <IMFallibleChatItem> {
    bool  _failed;
    IMHandle * _sender;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMHandle *sender;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)failed;
- (id)sender;
- (id)title;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
