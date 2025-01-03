/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailKit.framework/MailKit
 */

@interface MERemoteExtension : NSObject <EFPubliclyDescribable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLevelLock;
    unsigned long long  _bodyAccess;
    NSString * _containerID;
    NSString * _containerPath;
    NSUUID * _contextUUID;
    NSString * _dataAccessReason;
    bool  _entitlementVerified;
    NSExtension * _extension;
    MERemoteExtensionContext * _extensionContext;
    NSString * _extensionID;
    NSObject<OS_dispatch_queue> * _extensionLoadingQueue;
    NSDictionary * _headerAccessLevels;
    UIImage * _messageSecurityDecoderIcon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _remoteExtensionProxyLock;
    EFPromise * _remoteExtensionProxyPromise;
    <MEMessageSecurityHandler> * _synchronousMessageSecurityInterface;
}

@property (readonly) bool bodyAccess;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) <MEComposeSessionHandler> *composeSessionInterface;
@property (nonatomic, readonly) MEMailComposeToolbarItemInfo *composeWindowToolbarButtonInfo;
@property (nonatomic, retain) NSString *containerID;
@property (nonatomic, retain) NSString *containerPath;
@property (nonatomic, readonly) NSString *containingAppDisplayName;
@property (nonatomic, readonly) NSURL *containingAppURL;
@property (readonly) NSUUID *contextUUID;
@property (readonly, copy) NSString *dataAccessReason;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *displayVersion;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic) bool entitlementVerified;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, readonly) MERemoteExtensionContext *extensionContext;
@property (readonly) MEExtensionHostContext *extensionHostContext;
@property (nonatomic, retain) NSString *extensionID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *extensionLoadingQueue;
@property (readonly) bool hasMessageContentAccess;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *headerAccessLevels;
@property (nonatomic, readonly) bool inboundNetworkingAllowed;
@property (setter=setEnabled:, nonatomic) bool isEnabled;
@property (nonatomic, readonly) UIImage *menuIcon;
@property (nonatomic, readonly) <MEMessageActionHandler_Private> *messageActionProviderInterface;
@property (nonatomic, readonly) UIImage *messageSecurityDecoderIcon;
@property (nonatomic, readonly) bool outboundNetworkingAllowed;
@property (nonatomic, readonly) UIImage *preferencesIcon;
@property (nonatomic, retain) EFPromise *remoteExtensionProxyPromise;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MEComposeSessionHandler_Private> *synchronousComposeSessionInterface;
@property (nonatomic, readonly) <MEContentBlocker_Private> *synchronousContentBlockerInterface;
@property (nonatomic, readonly) <MEMessageActionHandler_Private> *synchronousMessageActionProviderInterface;
@property (nonatomic, readonly) <MEMessageSecurityHandler> *synchronousMessageSecurityInterface;
@property (nonatomic, readonly) UIImage *toolbarIcon;

+ (id)allCapabilities;
+ (id)allCapabilitiesRequiringMessageContentAccess;
+ (id)log;

- (void).cxx_destruct;
- (id)_getInterfaceForExtensionCapability:(id)arg1 error:(id*)arg2;
- (id)_imageForName:(id)arg1;
- (id)_interfaceForExtensionCapability:(id)arg1;
- (id)_loadRemoteExtesionProxyFuture;
- (void)_nts_loadBodyAccess;
- (void)_nts_loadDataAccessReason;
- (id)_remoteExtensionProxyFuture;
- (id)_synchronousInterfaceForExtensionCapability:(id)arg1;
- (bool)bodyAccess;
- (id)capabilities;
- (id)composeSessionInterface;
- (id)composeWindowToolbarButtonInfo;
- (id)containerID;
- (id)containerPath;
- (id)containingAppDisplayName;
- (id)containingAppURL;
- (id)contentBlockerInterface;
- (id)contextUUID;
- (id)dataAccessReason;
- (id)description;
- (id)descriptionText;
- (id)displayName;
- (id)displayVersion;
- (id)ef_publicDescription;
- (bool)entitlementVerified;
- (id)extension;
- (id)extensionContext;
- (id)extensionHostContext;
- (id)extensionID;
- (id)extensionLoadingQueue;
- (void)getDecodedMailViewControllerForMessageContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getMailComposeExtensionViewControllerForSession:(id)arg1 hostDelegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getMailSignatureVerificationExtensionViewControllerForMessageSigners:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasMessageContentAccess;
- (unsigned long long)hash;
- (id)headerAccessLevels;
- (bool)inboundNetworkingAllowed;
- (id)initWithExtension:(id)arg1;
- (id)interfaceForExtensionCapability:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)menuIcon;
- (id)messageActionProviderInterface;
- (id)messageSecurityDecoderIcon;
- (bool)outboundNetworkingAllowed;
- (id)preferencesIcon;
- (void)primaryActionClickedForMessageContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteExtensionProxyPromise;
- (void)setContainerID:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEntitlementVerified:(bool)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionID:(id)arg1;
- (void)setExtensionLoadingQueue:(id)arg1;
- (void)setRemoteExtensionProxyPromise:(id)arg1;
- (id)synchronousComposeSessionInterface;
- (id)synchronousContentBlockerInterface;
- (id)synchronousMessageActionProviderInterface;
- (id)synchronousMessageSecurityInterface;
- (id)toolbarIcon;
- (id)toolbarIconTooltip;

@end
