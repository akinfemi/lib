/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <aakin-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:05:15 by akinfemi          #+#    #+#             */
/*   Updated: 2017/12/21 13:58:02 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Brief summary
* New binary entry struct
*/

typedef struct		s_bin
{
	char			*name;
	char			*path;
	struct s_bin	*next;
}					t_bin;

/*
* Brief summary
* Hash table struct
*/

typedef struct		s_hash_table
{
	struct s_bin	**binaries;
	int				capacity;
}					t_hash_table;

/*
* Function prototypes
*/

void                free_hash(t_hash_table *hash_table);
void                ft_bin_lstdel(t_bin *bin);
t_hash_table		*hash_init(int capacity);
int					hash_insert(t_hash_table *ht, char *name, char *path);
t_bin				*hash_search(t_hash_table *ht, char *name);
t_bin				*new_bin(char *name, char *path);
