/* Generated by RuntimeBrowser.
 */

@protocol StickerKit.ImageGlyphDataSourceProtocol

@required

- (NSString *)accessibilityTextForItem:(STKImageGlyph *)arg1;
- (NSArray *)categories;
- (long long)categoryIndexForIndexPath:(NSIndexPath *)arg1;
- (void)configureWith:(STKImageGlyphViewConfiguration *)arg1;
- (void)deleteItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STKImageGlyph *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (long long)glyphType;
- (void)imageAtIndexPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSIndexPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)imageForImageGlyph:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STKImageGlyph *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (NSIndexPath *)indexPathForCategory:(_TtC10StickerKit18ImageGlyphCategory *)arg1;
- (NSIndexPath *)indexPathForIdentifier:(NSString *)arg1 ofType:(long long)arg2;
- (NSIndexPath *)indexPathForItem:(STKImageGlyph *)arg1;
- (NSIndexPath *)indexPathForItemAtIndex:(long long)arg1;
- (bool)isEnabled;
- (bool)isReady;
- (STKImageGlyph *)itemAtIndexPath:(NSIndexPath *)arg1;
- (void)moveItemFromIndex:(void *)arg1 toIndex:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)moveItemFromIndexPath:(void *)arg1 toIndexPath:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSIndexPath *, NSIndexPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (long long)numberOfItems;
- (long long)numberOfItemsInCategory:(_TtC10StickerKit18ImageGlyphCategory *)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)refresh;
- (NSCollectionLayoutSection *)sectionLayoutForSectionIndex:(long long)arg1 environment:(id <NSCollectionLayoutEnvironment>)arg2;
- (NSArray *)snapshotIdentifiersInSection:(long long)arg1;
- (void)stickerAtIndexPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSIndexPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, STKSticker *, void*
- (void)stickerForImageGlyph:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STKImageGlyph *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, STKSticker *, void*

@end