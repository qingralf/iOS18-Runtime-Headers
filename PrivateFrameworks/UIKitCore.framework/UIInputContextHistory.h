/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputContextHistory : NSObject {
    TIInputContextHistory * _tiInputContextHistory;
}

@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) NSSet *recipientNames;
@property (nonatomic, readonly) NSString *senderIdentifier;
@property (nonatomic, readonly) NSSet *senderIdentifiers;
@property (nonatomic, readonly) TIInputContextHistory *tiInputContextHistory;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (void)addNewParticipantWithIdentifier:(id)arg1 name:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 entryIdentifier:(id)arg4;
- (void)didFinishAddingEntriesToInputContextHistory;
- (id)initWithInputContextHistory:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;
- (id)initWithThreadID:(unsigned long long)arg1 participantsIDtoNamesMap:(id)arg2 firstPersonIDs:(id)arg3 primaryRecipients:(id)arg4 secondaryRecipients:(id)arg5 infoDict:(id)arg6;
- (id)initWithThreadIdentifier:(id)arg1 participantsIDtoNames:(id)arg2 firstPerson:(id)arg3 primaryRecipients:(id)arg4 secondaryRecipients:(id)arg5 info:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)mostRecentTextEntries:(unsigned long long)arg1;
- (id)recipientIdentifiers;
- (id)recipientNames;
- (id)senderIdentifier;
- (id)senderIdentifiers;
- (id)tiInputContextHistory;
- (void)updateRecipientNames:(id)arg1;

@end
