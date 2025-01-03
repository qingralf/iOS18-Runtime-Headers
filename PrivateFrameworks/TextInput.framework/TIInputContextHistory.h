/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding> {
    struct set<NSHolder<TIInputContextEntry>, std::less<NSHolder<TIInputContextEntry>>, std::allocator<NSHolder<TIInputContextEntry>>> { 
        struct __tree<NSHolder<TIInputContextEntry>, std::less<NSHolder<TIInputContextEntry>>, std::allocator<NSHolder<TIInputContextEntry>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<TIInputContextEntry>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<NSHolder<TIInputContextEntry>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _entries;
    NSSet * _firstPersonIdentifiers;
    NSString * _focusedEntryIdentifier;
    NSDictionary * _infoDict;
    unsigned long long  _maxContextLength;
    NSMutableDictionary * _participantsIDtoNamesMap;
    struct set<NSHolder<TIInputContextEntry>, std::less<NSHolder<TIInputContextEntry>>, std::allocator<NSHolder<TIInputContextEntry>>> { 
        struct __tree<NSHolder<TIInputContextEntry>, std::less<NSHolder<TIInputContextEntry>>, std::allocator<NSHolder<TIInputContextEntry>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<TIInputContextEntry>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<NSHolder<TIInputContextEntry>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _pendingEntries;
    NSSet * _primaryRecipientIdentifiers;
    NSSet * _recipientIdentifiers;
    NSSet * _recipientNames;
    NSSet * _secondaryRecipientIdentifiers;
    unsigned long long  _threadID;
    NSString * _threadIdentifier;
}

@property (nonatomic, readonly) NSString *aggregateText;
@property (nonatomic, readonly) NSSet *firstPersonIdentifiers;
@property (nonatomic, copy) NSString *focusedEntryIdentifier;
@property (nonatomic, retain) NSDictionary *infoDict;
@property (nonatomic) unsigned long long maxContextLength;
@property (nonatomic, readonly) NSString *mostRecentNonSenderTextEntry;
@property (nonatomic, readonly) bool mostRecentTextEntryIsByMe;
@property (nonatomic, readonly) NSString *mostRecentTextEntryLogString;
@property (nonatomic, readonly) NSMutableDictionary *participantsIDtoNamesMap;
@property (nonatomic, readonly) NSSet *primaryRecipientIdentifiers;
@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) NSSet *recipientNames;
@property (nonatomic, readonly) NSSet *secondaryRecipientIdentifiers;
@property (nonatomic, readonly) NSString *senderIdentifier;
@property (nonatomic, readonly) NSSet *senderIdentifiers;
@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic, readonly) NSString *threadIdentifier;

+ (bool)isMail;
+ (unsigned long long)maxEntryLength;
+ (bool)nameComponentsAreEmpty:(id)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_addEntry:(id)arg1;
- (id)_addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 entryIdentifier:(id)arg4 primaryRecipientIdentifiers:(id)arg5 secondaryRecipientIdentifiers:(id)arg6;
- (void)_enumerateAllEntriesAsInputContextEntries:(id /* block */)arg1;
- (void)addEntry:(id)arg1;
- (void)addNewParticipantWithIdentifier:(id)arg1 name:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 entryIdentifier:(id)arg4;
- (id)aggregateText;
- (bool)allParticipantsKnown;
- (void)appendPendingEntriesFromInputContextHistory:(id)arg1;
- (void)assertCheckpointForCoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAllContextEntries:(id /* block */)arg1;
- (void)enumerateAllContextEntriesWithEntryId:(id /* block */)arg1;
- (void)enumerateAllContextEntryObjects:(id /* block */)arg1;
- (void)enumerateAllEntries:(id /* block */)arg1;
- (void)enumeratePendingEntries:(id /* block */)arg1;
- (id)firstPersonIdentifiers;
- (id)focusedEntryIdentifier;
- (bool)hasPendingEntries;
- (id)infoDict;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;
- (id)initWithThreadID:(unsigned long long)arg1 participantsIDtoNamesMap:(id)arg2 firstPersonIDs:(id)arg3 primaryRecipients:(id)arg4 secondaryRecipients:(id)arg5;
- (id)initWithThreadIdentifier:(id)arg1 participantsIDtoNamesMap:(id)arg2 firstPersonIDs:(id)arg3 primaryRecipients:(id)arg4 secondaryRecipients:(id)arg5 infoDict:(id)arg6;
- (id)invalidReasonsForSmartReplyGeneration;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxContextLength;
- (id)mostRecentNonSenderTextEntry;
- (id)mostRecentTextEntries:(unsigned long long)arg1;
- (id)mostRecentTextEntry;
- (bool)mostRecentTextEntryIsByMe;
- (id)mostRecentTextEntryLogString;
- (id)participantsIDtoNamesMap;
- (id)primaryRecipientIdentifiers;
- (id)recipientIdentifiers;
- (id)recipientNames;
- (id)secondaryRecipientIdentifiers;
- (id)senderIdentifier;
- (id)senderIdentifiers;
- (void)setFocusedEntryIdentifier:(id)arg1;
- (void)setInfoDict:(id)arg1;
- (void)setMaxContextLength:(unsigned long long)arg1;
- (unsigned long long)threadID;
- (id)threadIdentifier;
- (void)updateRecipientNames:(id)arg1;
- (bool)validateForSmartReplyGeneration;

@end
