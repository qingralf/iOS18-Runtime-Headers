/* Generated by RuntimeBrowser.
 */

@protocol PLJournalEntryPayloadInsertAdapter

@required

- (bool)isValidForJournalPersistence;
- (NSManagedObject *)managedObject;
- (<PLJournalEntryPayload> *)payloadForChangedKeys:(NSSet *)arg1;
- (<PLJournalEntryPayloadID> *)payloadID;
- (id)sourceObject;

@end