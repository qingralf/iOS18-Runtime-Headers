/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDContactChangeHistoryEventVisitor : NSObject <CNChangeHistoryEventVisitor> {
    NSEnumerator * _changeEnumerator;
    unsigned long long  _count;
    NSMutableArray * _deletedContactIdentifiers;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSArray *deletedContactIdentifiers;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deletedContactIdentifiers;
- (id)initWithChangeEnumerator:(id)arg1;
- (void)reset;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitEventsWithBatchSize:(unsigned long long)arg1 batchCallback:(id /* block */)arg2;
- (void)visitUpdateContactEvent:(id)arg1;

@end
