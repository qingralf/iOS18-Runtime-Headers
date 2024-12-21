/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMMailbox : EMRepositoryObject <EFPubliclyDescribable, EMMailboxBuilder, MSBucketBarMailbox, NSSecureCoding> {
    EMReceivingAccount * _account;
    EMObjectID * _accountIdentifier;
    bool  _canArchive;
    bool  _canContainMessages;
    EMMailboxCollection * _children;
    bool  _descriptionUsesRealName;
    NSString * _name;
    EMMailbox * _parent;
    EMMailboxObjectID * _parentID;
    NSString * _redactedName;
    long long  _type;
}

@property (nonatomic, readonly) EMReceivingAccount *account;
@property (nonatomic, readonly) EMObjectID *accountIdentifier;
@property (nonatomic, readonly) EMReceivingAccount *accountIfAvailable;
@property (nonatomic, readonly) NSString *bucketBarConfigurationIdentifier;
@property (nonatomic) bool canArchive;
@property (nonatomic) bool canContainMessages;
@property (nonatomic, retain) EMMailboxCollection *children;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool descriptionUsesRealName;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) NSURL *externalURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCoreSpotlightMailbox;
@property (nonatomic, readonly) bool isDraftsMailbox;
@property (nonatomic, readonly) bool isInboxMailbox;
@property (nonatomic, readonly) bool isOutgoingMailbox;
@property (nonatomic, readonly) bool isSendLaterMailbox;
@property (nonatomic, readonly) bool isSentMailbox;
@property (nonatomic, readonly) bool isSmartMailbox;
@property (nonatomic, readonly) bool isTopLevelMailbox;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) EMMailboxObjectID *objectID;
@property (nonatomic) EMMailbox *parent;
@property (nonatomic, readonly) EMMailboxObjectID *parentID;
@property (nonatomic, readonly, copy) NSString *redactedName;
@property (nonatomic, retain) EMMailboxRepository *repository;
@property (nonatomic, readonly) bool shouldArchiveByDefault;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSelectAll;
@property (nonatomic) long long type;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

+ (bool)_isOutgoingMailboxType:(long long)arg1;
+ (id)_predicateForSmartMailboxes:(bool)arg1;
+ (bool)deleteMovesToTrashForMailboxes:(id)arg1;
+ (id)predicateForMailboxAccount:(id)arg1;
+ (id)predicateForMailboxAccount:(id)arg1 topLevelOnly:(bool)arg2;
+ (id)predicateForMailboxAccountIdentifier:(id)arg1 topLevelOnly:(bool)arg2;
+ (id)predicateForMailboxChildren:(id)arg1;
+ (id)predicateForMailboxName:(id)arg1;
+ (id)predicateForMailboxType:(long long)arg1;
+ (id)predicateForPrimaryMailboxWithAccount:(id)arg1;
+ (id)predicateForRegularMailboxes;
+ (id)predicateForSmartMailboxes;
+ (id)predicateForTopLevelMailboxes;
+ (bool)shouldArchiveByDefaultForMailboxes:(id)arg1;
+ (id)sortDescriptorForDisplayOrder;
+ (id)sortDescriptorForNameAscending:(bool)arg1;
+ (bool)supportsArchivingForMailboxes:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)supportsSelectAllForMailboxes:(id)arg1;
+ (bool)typeIsValidTransferDestination:(long long)arg1;

- (void).cxx_destruct;
- (bool)_canArchiveForMailboxType:(long long)arg1;
- (void)_commonInitName:(id)arg1 accountIdentifier:(id)arg2 type:(long long)arg3 canContainMessages:(bool)arg4 children:(id)arg5 parentID:(id)arg6 builder:(id /* block */)arg7;
- (bool)_hasFetchedAccount;
- (bool)_shouldArchiveByDefault;
- (id)_shouldArchiveByDefaultString;
- (id)account;
- (id)accountIdentifier;
- (id)accountIfAvailable;
- (bool)canArchive;
- (bool)canContainMessages;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (bool)descriptionUsesRealName;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)externalURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 accountIdentifier:(id)arg3 type:(long long)arg4 builder:(id /* block */)arg5;
- (id)initWithObjectID:(id)arg1 repository:(id)arg2 name:(id)arg3 accountIdentifier:(id)arg4 type:(long long)arg5 builder:(id /* block */)arg6;
- (bool)isCoreSpotlightMailbox;
- (bool)isDraftsMailbox;
- (bool)isInboxMailbox;
- (bool)isOutgoingMailbox;
- (bool)isSendLaterMailbox;
- (bool)isSentMailbox;
- (bool)isSmartMailbox;
- (bool)isTopLevelMailbox;
- (id)name;
- (id)parent;
- (id)parentID;
- (id)redactedName;
- (id)repository;
- (void)setCanArchive:(bool)arg1;
- (void)setCanContainMessages:(bool)arg1;
- (void)setChildren:(id)arg1;
- (void)setDescriptionUsesRealName:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentFromMailboxes:(id)arg1;
- (void)setRepository:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldArchiveByDefault;
- (bool)supportsSelectAll;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport

- (id)bucketBarConfigurationIdentifier;

@end