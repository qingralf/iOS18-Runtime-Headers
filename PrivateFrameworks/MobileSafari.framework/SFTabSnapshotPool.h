/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFTabSnapshotPool : NSObject {
    void contentProvider;
    void wrapped;
}

@property (nonatomic, copy) id /* block */ contentProvider;
@property (nonatomic, readonly) NSArray *sortedSnapshotIdentifiers;
@property (nonatomic, copy) id /* block */ sortedSnapshotIdentifiersDidChangeHandler;

- (void).cxx_destruct;
- (void)contentDidChangeForSnapshotsWithIdentifier:(id)arg1;
- (id /* block */)contentProvider;
- (void)discardRegistration:(id)arg1;
- (id)init;
- (id)registrationForIdentifier:(id)arg1;
- (void)setContentProvider:(id /* block */)arg1;
- (void)setSortedSnapshotIdentifiersDidChangeHandler:(id /* block */)arg1;
- (id)sortedSnapshotIdentifiers;
- (id /* block */)sortedSnapshotIdentifiersDidChangeHandler;

@end
