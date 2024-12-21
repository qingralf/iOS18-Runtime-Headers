/* Generated by RuntimeBrowser.
 */

@protocol CAFSeatBeltObserver <CAFServiceObserver>

@required

- (void)seatBeltService:(CAFSeatBelt *)arg1 didUpdateBuckleState:(unsigned char)arg2;
- (void)seatBeltService:(CAFSeatBelt *)arg1 didUpdateName:(NSString *)arg2;
- (void)seatBeltService:(CAFSeatBelt *)arg1 didUpdateSeatBeltIndicator:(unsigned char)arg2;
- (void)seatBeltService:(CAFSeatBelt *)arg1 didUpdateSeatOccupancy:(unsigned char)arg2;
- (void)seatBeltService:(CAFSeatBelt *)arg1 didUpdateVehicleLayoutKey:(NSString *)arg2;

@end