<div id="node-<?php print $node->nid; ?>" class="blog-teaser <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	
	<div class="blog-header">
		<div class="create-date">			
			<span class="day"><?php print format_date($created, 'custom', 'd'); ?></span>
			<span class="month"><?php print format_date($created, 'custom', 'M'); ?></span>
			<span class="year"><?php print format_date($created, 'custom', 'Y'); ?></span>
		</div>
		<?php print render($title_prefix); ?>
			<h3 class="blog-title" <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
		<?php print render($title_suffix); ?>  
	</div>
	<div class="blog-content">
			<?php print render($content['body']);?>
	</div>
</div>