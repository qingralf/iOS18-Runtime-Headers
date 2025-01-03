/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKAutoRefineQuery : PKQuery <CHQueryDelegate> {
    <PKAutoRefineQueryDelegate> * _autoRefineDelegate;
    CHAutoRefineQuery * _query;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CHAutoRefineQuery *query;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRecognitionSessionManager:(id)arg1;
- (void)pause;
- (id)query;
- (void)queryDidUpdateResult:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)start;
- (void)teardown;

@end
