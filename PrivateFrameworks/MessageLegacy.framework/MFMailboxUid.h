/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailboxUid : NSObject <EDIndexableMailbox, EFPubliclyDescribable, NSCopying> {
    MailAccount * _account;
    unsigned long long  _attributes;
    NSMutableArray * _children;
    MFMessageCriterion * _criterion;
    NSArray * _extraAttributes;
    _Atomic int  _isChangingUserInfo;
    _Atomic unsigned long long  _isSendLater;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    long long  _mailboxID;
    EDMailboxPersistence * _mailboxPersistence;
    EMMailboxObjectID * _objectID;
    MFWeakReferenceHolder * _parent;
    NSString * _pathComponent;
    NSNumber * _pendingLevel;
    NSString * _realFullPath;
    MailAccount * _representedAccount;
    _Atomic int  _type;
    struct EFAtomicSetOnceObject_s { 
        _Atomic long long _info; 
    }  _userInfo;
    bool  allCriteriaMustBeSatisfied;
    NSString * uniqueId;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *URLString;
@property (nonatomic, readonly) MailAccount *account;
@property (nonatomic, readonly, copy) NSString *accountRelativePath;
@property (nonatomic, readonly) MFInvocationQueue *attachmentDownloadQueue;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic, readonly) NSEnumerator *childEnumerator;
@property (nonatomic, readonly, copy) NSArray *children;
@property (nonatomic, readonly) long long databaseID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *decodedName;
@property (nonatomic, readonly) NSEnumerator *depthFirstEnumerator;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, retain) NSArray *extraAttributes;
@property (nonatomic, readonly) bool hasChildren;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRootMailbox;
@property (readonly) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, readonly) struct EDMailboxRowID_s { unsigned long long x1; } mailboxRowID;
@property long long mailboxType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfChildren;
@property (nonatomic, readonly) unsigned long long numberOfDescendants;
@property (nonatomic, readonly) EMMailboxObjectID *objectID;
@property (nonatomic, retain) MFMailboxUid *parent;
@property (nonatomic, readonly, copy) NSString *persistentID;
@property (nonatomic, readonly) unsigned long long suggestionsLostMessageSearchResultCount;
@property (nonatomic, readonly) double suggestionsLostMessageSearchTimestamp;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (readonly) MFMailboxUserInfo *userInfo;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (id)defaultScheduler;
+ (id)fileURLForMailboxURL:(id)arg1;
+ (id)fullPathForAccount:(id)arg1 mailbox:(id)arg2;
+ (bool)isDraftsMailboxType:(long long)arg1;
+ (bool)isOutgoingMailboxType:(long long)arg1;
+ (bool)isSentMailboxType:(long long)arg1;
+ (bool)isStandardizedMailboxUidType:(long long)arg1;
+ (id)log;
+ (id)specialNameForType:(long long)arg1;
+ (bool)typeIsValidTransferDestination:(long long)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)URLString;
- (id)URLStringNonNil;
- (id)URLWithAccount:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithName:(id)arg1 attributes:(unsigned long long)arg2 forAccount:(id)arg3;
- (id)_mutableChildren;
- (id)_privacySafeDescription;
- (id)account;
- (id)accountDisplayName;
- (id)accountRelativePath;
- (void)addToPostOrderTraversal:(id)arg1;
- (bool)alwaysWriteFullMessageFile;
- (id)ancestralAccount;
- (id)attachmentDownloadQueue;
- (unsigned long long)attributes;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)childEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(bool)arg1;
- (id)childWithExtraAttribute:(id)arg1;
- (id)childWithName:(id)arg1;
- (id)children;
- (long long)compareWithMailboxUid:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criterion;
- (long long)databaseID;
- (void)dealloc;
- (id)debugDescription;
- (id)decodedName;
- (id)depthFirstEnumerator;
- (id)descendantWithExtraAttribute:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didChangeUserInfo;
- (id)displayName;
- (id)displayNameUsingSpecialNames;
- (id)ef_publicDescription;
- (id)extraAttributes;
- (void)flushCriteria;
- (id)fullPath;
- (id)fullPathNonNil;
- (bool)hasChildren;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(unsigned long long)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4;
- (id)initWithName:(id)arg1 attributes:(unsigned long long)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4 type:(long long)arg5;
- (void)invalidate;
- (bool)isContainer;
- (bool)isDescendantOfMailbox:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNotesMailboxUid;
- (bool)isOutgoingMailboxUid;
- (bool)isRootMailbox;
- (bool)isSendLaterMailbox;
- (bool)isSentMailboxUid;
- (bool)isShared;
- (bool)isSpecialMailboxUid;
- (bool)isStandardizedMailboxUid;
- (bool)isStore;
- (bool)isValid;
- (bool)isVisible;
- (id)mailboxPersistence;
- (struct EDMailboxRowID_s { unsigned long long x1; })mailboxRowID;
- (long long)mailboxType;
- (id)mutableCopyOfChildren;
- (id)mutableDictionaryRepresentation;
- (id)name;
- (unsigned long long)numberOfChildren;
- (unsigned long long)numberOfDescendants;
- (id)objectID;
- (id)oldURLString;
- (id)parent;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)pathRelativeToMailboxForDisplay:(id)arg1;
- (id)persistentID;
- (id)realFullPath;
- (id)redactedName:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)representedAccount;
- (id)rootMailbox;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (void)setAttributes:(unsigned long long)arg1;
- (bool)setChildren:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setMailboxType:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setRepresentedAccount:(id)arg1;
- (void)setUserInfoBool:(bool)arg1 forKey:(id)arg2;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (bool)shouldRestoreMessagesAfterFailedDelete;
- (bool)shouldUseNonDeletedForUnreadCount;
- (void)sortChildren;
- (id)store;
- (unsigned long long)suggestionsLostMessageSearchResultCount;
- (double)suggestionsLostMessageSearchTimestamp;
- (id)topMailbox;
- (long long)type;
- (id)uniqueId;
- (unsigned long long)unreadCount;
- (void)updateMostRecentStatusCount:(unsigned long long)arg1;
- (void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1;
- (id)userInfo;
- (bool)userInfoBoolForKey:(id)arg1;
- (id)userInfoFileURL;
- (id)userInfoObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (long long)nano_toMailboxType:(unsigned long long)arg1;

- (id)nano_displayName;
- (id)nano_mailbox;
- (id)nano_mailboxId;
- (unsigned long long)nano_mailboxType;

@end