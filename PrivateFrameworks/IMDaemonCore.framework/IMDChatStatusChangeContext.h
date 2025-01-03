/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChatStatusChangeContext : NSObject {
    IMDAccount * _account;
    long long  _category;
    NSString * _displayName;
    NSString * _extensionName;
    NSString * _groupID;
    NSArray * _handleInfo;
    bool  _isBlackholed;
    NSString * _lastAddressedHandle;
    NSString * _lastAddressedSIMID;
    NSString * _messageID;
    NSString * _originalGroupID;
}

@property (nonatomic, retain) IMDAccount *account;
@property (nonatomic) long long category;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *extensionName;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, retain) NSArray *handleInfo;
@property (nonatomic) bool isBlackholed;
@property (nonatomic, retain) NSString *lastAddressedHandle;
@property (nonatomic, retain) NSString *lastAddressedSIMID;
@property (nonatomic, retain) NSString *messageID;
@property (nonatomic, retain) NSString *originalGroupID;

- (void).cxx_destruct;
- (id)account;
- (long long)category;
- (id)displayName;
- (id)extensionName;
- (id)groupID;
- (id)handleInfo;
- (bool)isBlackholed;
- (id)lastAddressedHandle;
- (id)lastAddressedSIMID;
- (id)messageID;
- (id)originalGroupID;
- (void)setAccount:(id)arg1;
- (void)setCategory:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExtensionName:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHandleInfo:(id)arg1;
- (void)setIsBlackholed:(bool)arg1;
- (void)setLastAddressedHandle:(id)arg1;
- (void)setLastAddressedSIMID:(id)arg1;
- (void)setMessageID:(id)arg1;
- (void)setOriginalGroupID:(id)arg1;

@end
