/* Generated by RuntimeBrowser.
 */

@protocol _SFPBRFTableRowCardSection <NSObject>

@required

- (void)addCells:(_SFPBRFTableCell *)arg1;
- (void)addCompact_cells:(_SFPBRFTableCell *)arg1;
- (NSArray *)cells;
- (_SFPBRFTableCell *)cellsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellsCount;
- (void)clearCells;
- (void)clearCompact_cells;
- (NSArray *)compact_cells;
- (_SFPBRFTableCell *)compact_cellsAtIndex:(unsigned long long)arg1;
- (unsigned long long)compact_cellsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (bool)scale_to_fit;
- (void)setCells:(NSArray *)arg1;
- (void)setCompact_cells:(NSArray *)arg1;
- (void)setScale_to_fit:(bool)arg1;
- (void)setVertical_alignment:(int)arg1;
- (int)vertical_alignment;

@end
