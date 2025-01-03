/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreGraphics.framework/CoreGraphics
 */

@interface CPTableMaker : NSObject {
    unsigned int  cellIndex;
    struct { double x1; double x2; } * columnXIntervals;
    struct { double x1; double x2; } * rowYIntervals;
    CPTable * table;
    CPZone * tableZone;
}

+ (bool)isTable:(id)arg1;
+ (void)makeTableFrom:(id)arg1;
+ (void)makeTablesInPage:(id)arg1;
+ (void)makeTablesInZone:(id)arg1;

- (void)dealloc;
- (void)determineRowsAndColumns:(bool)arg1;
- (id)initWithZone:(id)arg1;
- (void)makeTable;
- (id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1;
- (id)newTableCellFromZone:(id)arg1;

@end
