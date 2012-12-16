//
//  TableViewCell.h
//  Ghost
//
//  Created by Ashutosh Desai on 12/15/12.
//  Copyright (c) 2012 makegameswithus inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewCell : UITableViewCell
{
	UIFont *font;
	UIFont *detailFont;
	UIColor *textColor;
	UIColor *altColor;
	UIImageView *chatIcon;
}

@property UIImageView *chatIcon;

+ (CGFloat) cellHeight;
+ (NSString*)shortName:(NSString*)friendname;

@end
